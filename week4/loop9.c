#include<stdio.h>
int main(){
int num,mult=1;
printf("enter the number :");
scanf("%d",&num);
for (int i = 0; i < 13; i++)
{
    mult=num*i;
    printf("%d\n",mult);
}

}