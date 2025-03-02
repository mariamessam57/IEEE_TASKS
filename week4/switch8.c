#include <stdio.h>
#include <math.h>

float sum(float, float);
float sub(float, float);
float mult(float, float);
float div(float,float);
float power(float, float);
float sq(float);

int main() {
    float num1, num2;
    char op;
    float result;

    printf("Enter operation (+, -, *, /, for power (p), for square root (s)) : ");
    scanf(" %c", &op); 
    if (op == 's') //square root 
    {
        printf("Enter a number: ");
        scanf("%f", &num1);
    } 
    
    else if(op=='p') //power
    {
        printf("enter base :");
        scanf("%f",&num1);
        printf("enter power: ");
        scanf("%f",&num2);
    }
    
     else {
        printf("Please enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    }


    switch (op) {
        case '+':
            result = sum(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = sub(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = div(num1, num2);
                printf("Result: %.2f\n", result);
            }
            break;

        case '*':
            result = mult(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case 'p': // power
            result = power(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case 's': // square root
            if (num1 < 0) {
                printf("Error! Square root of a negative number is not defined.\n");
            } else {
                result = sq(num1);
                printf("Result: %.2f\n", result);
            }
            break;

        default:
            printf("Error! Invalid operation.\n");
    }

    return 0;
}

     //opretions
float sum(float x, float y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y;
}

float mult(float x, float y) {
    return x * y;
}

float div(float x, float y) {
    return x / y;
}

float power(float base, float p) { 
    return pow(base, p);
}

float sq(float num) {
    return sqrt(num);
}
