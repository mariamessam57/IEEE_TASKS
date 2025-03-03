#include<stdio.h>
#define pi 3.14
float diameter(float);
float cir(float);
float area(float);
int main(){
    float r ,d,c,a;
    printf("enter radius:");
    scanf("%f",&r);
    d=diameter(r);
    c=cir(r);
    a=area(r);
    printf("diameter=%.2f\n",d);
    printf("Circumference=%.2f\n",c);
    printf("area=%.2f\n",a);
 
}
 
float diameter(float r){
    return 2*r;
}
float cir(float r){
   return 2 * pi * r;
}
float area(float r){
    return pi* r * r;
}
