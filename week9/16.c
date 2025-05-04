#include <stdio.h>
#define Size 5
int size = Size;
int main(){
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter index %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < Size; i++)
    {
        printf("%d\n",arr[size-1]);
        size--;
    }
    
    
    
}