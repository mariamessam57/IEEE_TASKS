#include<stdio.h>
#define size 5
int main(){
    int arr1[size],arr2[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d=",i+1);
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        arr2[i]=arr1[i];
    }
    printf("coppied array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr2[i]);
        
    }
    
}