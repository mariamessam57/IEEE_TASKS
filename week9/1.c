#include<stdio.h>
#define size 10
int main(){
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d=",i+1);
        scanf("%d",&arr[i]);
    }
    printf("elements of array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
        
    }
    
}
