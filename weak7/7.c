#include<stdio.h>
#define SIZE 1000
void reversed(int *  , int size );
int main(){
    int arr[SIZE] ,size  ;
    printf("please enter size of array:");
    scanf("%d",&size);
    printf("enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
       scanf("%d",&arr[i]);
    }
    reversed(arr,size);
   printf("reversed array:\n");
   for (int i = 0; i < size; i++)
   {
      printf("%d\n",*(arr+i));
   }


}
void reversed(int *arr  ,int size){

    int *start = arr;            
    int *end = arr + size - 1;    
    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}


