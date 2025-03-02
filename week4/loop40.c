#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, position = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10;  
        decimal += remainder * pow(2, position);  
        binary /= 10;  
        position++;
    }
    return decimal;
}

int main() {
    long  binary;
    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    int decimal = binaryToDecimal(binary);
    printf("Decimal equivalent: %d\n", decimal);
    
    return 0;
}
