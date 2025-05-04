#include<stdio.h>
#define size 5
int main(){
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d=",i+1);
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } 
    printf("%d",arr[size-1]);
}