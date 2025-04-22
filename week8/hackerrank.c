#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int temp = *a;  // store original value of a
    *a = *a + *b;
    *b = abs(temp - *b);  // use original a for correct difference
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
