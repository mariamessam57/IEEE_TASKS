#include<stdio.h>
#define SIZE 1000
void copy(int *original , int *copy , int size);
int main(){
    int origin[SIZE] ,size ,cop[SIZE] ;
    printf("please enter size of array:");
    scanf("%d",&size);
    printf("enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
       scanf("%d",&origin[i]);
    }
    copy(origin,cop,size);
   printf("coppied array:\n");
   for (int i = 0; i < size; i++)
   {
      printf("%d\n",*(cop+i));
   }

    
}
void copy(int *original , int *copy , int size){
   for (int  i = 0; i < size ; i++)
   {
    *(copy+i)=*(original+i);
   }
   
}