#include <stdio.h>

// Define shipping cost constants
#define OVERNIGHT_SHIPPING 5
#define UNDER_10_SHIPPING 2
#define MORE_THAN_10_SHIPPING 3

// Function prototypes
void discount(int* price, int count, int* discount_applied);
void overnightdeliv(char overnight, int* price);
void Receipt(char items[][100], int prices[], int count, int total_price, int discount_applied);

int main() {

    // Declare variables
    char items[100][100], cont_order, overnight;
    int prices[100], price = 0, count = 0, total_price = 0;
    int discount_applied = 0;

    do {  
        
        // Get item information from user
        printf("Enter item name: ");
        scanf("%s", items[count]); 
        printf("Price: ");
        scanf("%d", &price);

        // Ask for overnight shipping
        printf("Overnight shipping required (y/n)? ");
        scanf(" %c", &overnight);
        overnightdeliv(overnight, &price);

        // Apply discount if applicable
        discount(&price, count + 1, &discount_applied);

        // Store item details
        prices[count] = price;
        total_price += price;
        count++;

        // Ask if the user wants to continue shopping
        printf("Continue shopping? (y/n): ");
        scanf(" %c", &cont_order);
    
    } while (cont_order == 'y' || cont_order == 'Y');
 
    // Check if the minimum order requirement is met
    if (count < 2) {
        printf("A minimum of 2 items is required for one order.\n"); 
        return 1;  
    }

    // Print final receipt
    Receipt(items, prices, count, total_price, discount_applied);

    return 0;
}

// Function to apply a discount if more than 5 items are purchased
void discount(int* price, int count, int* discount_applied) {
    if (count > 5) {
        *price = *price - (*price * 0.2);  
        *discount_applied = 1; // Mark that a discount was applied
    }
}

// Function to calculate shipping cost based on price and delivery option
void overnightdeliv(char overnight, int* price) {
    if (overnight == 'y' || overnight == 'Y') {
        *price += OVERNIGHT_SHIPPING;
        return; 
    }  
    if (*price < 10) {
        *price += UNDER_10_SHIPPING;
    } else {
        *price += MORE_THAN_10_SHIPPING;
    }
}

// Function to print the final receipt
void Receipt(char items[][100], int prices[], int count, int total_price, int discount_applied) {
    printf("\n\n");
    printf("************ FINAL INVOICE ************\n");
    printf("****************************************\n");
    for (int i = 0; i < count; i++) {
        printf("  Item %d: %-20s Price: $%-10d\n", i + 1, items[i], prices[i]);  
    }
    printf("****************************************\n");
    printf("  Total Amount: $%d\n", total_price);
    if (discount_applied) {
        printf("  * A 20%% discount was applied! *\n");
    }
    printf("****************************************\n");
    printf("  Thank you for shopping with us!\n");
    printf("****************************************\n");
    printf("\n\n");
}
