#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter frist side");
    scanf("%d",&a);
    printf("enter second side");
    scanf("%d",&b);
    printf("enter third side");
    scanf("%d",&c);
    if (a==b || a==c||b==c)
    {
        printf("triangle is isosceles");
    }
    else if(a==b && a==c && b==c) 
    {
        printf("triangle is equilateral");
    }
    else
    {
        printf("triangle is  scalene");
    }
    
    
}