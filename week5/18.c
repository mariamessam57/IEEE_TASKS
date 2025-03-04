#include <stdio.h>

int factorial(int num);

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial: %d\n", factorial(num));

    return 0;
}

int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}
