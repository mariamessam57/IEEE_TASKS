#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter frist side");
    scanf("%d",&a);
    printf("enter second side");
    scanf("%d",&b);
    printf("enter third side");
    scanf("%d",&c);
    if ((a+b>c)&&(a+c>b)&&(c+b>a))
    {
        printf(" triangle is valid ");
    }
    else{
        printf(" triangle is not valid ");
    }

}