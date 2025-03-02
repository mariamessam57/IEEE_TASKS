#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1;
    int num2;
    int sum , sub ,mult  ,mod ;
    float div =1.0000;
    printf("enter frist number=");
    scanf("%d",&num1);
    printf("enter second number=");
    scanf("%d",&num2);
    sum=num1+num2;
    sub=abs(num1-num2);
    mult=num1*num2;
    div=(float)num1/num2;
    mod=num1%num2;
    printf("the sum=%d\n",sum);
    printf("the sub=%d\n",sub);
    printf("the mult=%d\n",mult);
    printf("the div=%f\n",div);
    printf("the mod=%d",mod);



}