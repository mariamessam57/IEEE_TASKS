#include<stdio.h>
int max(int,int);
int min(int,int);
int main()   
{ int num1,num2,max1,min1;
  printf("enter numbers:");
  scanf("%d%d",&num1,&num2);
  max1=max(num1,num2);
  min1=min(num1,num2);
  printf("mximum=%d\n",max1);
  printf("minimum=%d",min1);
  
}
int max(int num1,int num2){

  return (num1 > num2 ) ? num1 : num2;
}

int min(int num1,int num2){
  return (num1 > num2 ) ? num2 : num1;
}
