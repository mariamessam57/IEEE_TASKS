#include<stdio.h>
int main(){
    int r,c;
    printf("enter  rows and colmns :");
    scanf("%d %d",&r,&c);
    int mat1[r][c],mat2[r][c] , res[r][c];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[i][j]=mat1[i][j]-mat2[i][j];

        }}
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
               printf("%d" ,res[i][j]);
    
            }}
}