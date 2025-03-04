#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

void printArmstrongNumbers(int start, int end) ;
int main() {
    int start, end;
    
    
    printf("Enter the lower bound: ");
    scanf("%d", &start);
    printf("Enter the upper bound: ");
    scanf("%d", &end);
    
    
    printArmstrongNumbers(start, end);
    
    return 0;
}
int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;
    
    originalNum = num;
    
    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    
    originalNum = num;
    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    
    return (int)result == num;
}
void printArmstrongNumbers(int start, int end) {

    printf("Armstrong numbers between %d and %d are: ", start, end);
    
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


