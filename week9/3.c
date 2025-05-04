#include<stdio.h>
#define size 5
int main(){
    int arr[size],sum=0;
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d=",i+1);
        scanf("%d",&arr[i]);
    }
   
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
        
    }
    printf("sum=%d",sum);
    
}

