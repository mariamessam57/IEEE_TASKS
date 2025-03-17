#include<stdio.h>
#define size 100 
int *search(int *, int);
int main(){
    int  elem ;
    
    int arr[size];
    printf("enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
       scanf("%d",&arr[i]);
    }

    printf("enter element to search:");
    scanf("%d",&elem);

    
    int*found=search(arr,elem);
 

    if (found!=NULL)
    {
        printf("element %d is in the array",elem);
    }
    else
    {
        printf("elemet is not in this array");
    }
      }
// pointer to retrun NULL
int *search(int *arr  , int elem){ 
    for (int i = 0; i < size; i++)
    {
        if (elem==*(arr+i))
        {
         return (arr+i);
        }  
    }
    return NULL;
    }