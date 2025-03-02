#include<stdio.h>
#include<stdlib.h>
int main(){
    float len;
    printf("please enter length in cm=");
    scanf("%f",&len);
    printf("length in meter=%f\n",len/100);
    printf("length in kilometer=%f",len/100000);

}