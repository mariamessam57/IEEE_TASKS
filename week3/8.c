#include <stdio.h>

int main()
{
    float cel, fahr;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    
    fahr = (cel * 9 / 5) + 32;

    printf("%f Celsius = %f Fahrenheit", cel, fahr);

    return 0;
}