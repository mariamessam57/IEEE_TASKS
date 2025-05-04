#include<stdio.h>
#define size 5
int main(){
    int arr[size],count=0;
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d=",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1; 
                break;
            }
        }
        if (isDuplicate) {
            count++;
        }
    }
    printf("duplicate elements=%d",count);
}
