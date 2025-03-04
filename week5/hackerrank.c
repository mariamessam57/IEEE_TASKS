#include <stdio.h>

int findNthTerm(int n, int a, int b, int c);

int main() {
    int n, a, b, c;
    
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", findNthTerm(n, a, b, c));

    return 0;
}

int findNthTerm(int n, int a, int b, int c) {
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;
    return findNthTerm(n - 1, a, b, c) + findNthTerm(n - 2, a, b, c) + findNthTerm(n - 3, a, b, c);
}
