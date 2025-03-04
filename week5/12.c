#include <stdio.h>

void printEven(int start, int end);
void printOdd(int start, int end);

int main() {
    int start, end, choice;
    
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Choose: 1 for Even, 2 for Odd: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Even numbers: ");
        printEven(start, end);
    } else if (choice == 2) {
        printf("Odd numbers: ");
        printOdd(start, end);
    } else {
        printf("Invalid choice!");
    }

    return 0;
}

void printEven(int start, int end) {
    if (start > end) 
        return;
    if (start % 2 == 0) 
        printf("%d ", start);
    printEven(start + 1, end);
}

void printOdd(int start, int end) {
    if (start > end) 
        return;
    if (start % 2 != 0) 
        printf("%d ", start);
    printOdd(start + 1, end);
}
