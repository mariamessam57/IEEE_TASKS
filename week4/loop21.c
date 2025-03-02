#include<stdio.h>
int main(){
    int base,power,num=1;
    printf("enter base:");
    scanf("%d",&base);
    printf("enter power:");
    scanf("%d",&power);
    for (int i = 0; i < power; i++)
    {
        num=num*base;
    }
    printf("%d",num);
    
}