#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int x = *a;   
    *a = *a + *b; 
    *b = abs(x - *b); 
}

int main() {
    int a, b;
    printf("enter numbers:");
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d\n", a, b); 

    return 0;
}
