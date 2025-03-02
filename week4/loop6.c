#include<stdio.h>
int main(){
  int n ,sum=0;
  printf("enter number:");
  scanf("%d",&n);
  for (int i = 0; i < n; i++)
  {
    sum=sum+i;
  }
  printf("sum=%d",sum);

  
}