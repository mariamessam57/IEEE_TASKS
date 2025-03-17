#include <stdio.h>

#define ROW 2
#define COL 2

void multiplyMatrices(int(*)[COL], int(*)[COL], int(*)[COL]);

int main() {
    int A[ROW][COL] = {{1, 2}, {3, 4}};
    int B[ROW][COL] = {{5, 6}, {7, 8}};
    int C[ROW][COL];

    multiplyMatrices(A, B, C);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", *(*(C + i) + j));
        }
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int (*A)[COL], int (*B)[COL], int (*C)[COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            *(*(C + i) + j) = 0;
            for (int k = 0; k < COL; k++) {
                *(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j);
            }
        }
    }
}
