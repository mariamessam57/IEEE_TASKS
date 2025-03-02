#include <stdio.h>

int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n); 

    char *words[]={"one","two","three","four","five","six","seven","eight","nine"}; //array of pointer

    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n - 1]);
    } else {
        printf("Greater than 9\n");
    }

}
