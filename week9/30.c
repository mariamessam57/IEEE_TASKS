#include <stdio.h>

int main() {
    int r, c;

    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];


    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    
    printf("\nSum of each row:\n");
    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += mat[i][j];
        }
        printf("Row %d sum = %d\n", i, rowSum);
    }

    
    printf("\nSum of each column:\n");
    for (int j = 0; j < c; j++) {
        int colSum = 0;
        for (int i = 0; i < r; i++) {
            colSum += mat[i][j];
        }
        printf("Column %d sum = %d\n", j, colSum);
    }

    return 0;
}
