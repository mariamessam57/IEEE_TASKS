#include<stdio.h>
#define SIZE 1000
void swap(int *first , int *second , int size);
int main(){
    int first[SIZE] ,size ,second[SIZE] ;
    printf("please enter size of array:");
    scanf("%d",&size);
    printf("enter  array1:\n");
    for (int i = 0; i < size; i++)
    {
       scanf("%d",&first[i]);
    }
    printf("enter  array2:\n");
    for (int i = 0; i < size; i++)
    {
       scanf("%d",&second[i]);
    }
    swap(first,second,size);
   printf("swaped array1:\n");
   for (int i = 0; i < size; i++)
   {
      printf("%d\n",*(first+i));
      
   }
   printf(" array2:\n");
   for (int i = 0; i < size; i++)
   {
      
      printf("%d\n",*(second+i));
   }

}
void swap(int *first , int *second , int size){
    
    for (int i = 0; i < size; i++)
    {    
        int temp=*(first+i);
        *(first+i)=*(second+i);
        *(second+i)=temp;
    }
    
}