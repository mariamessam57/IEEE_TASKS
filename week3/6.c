#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int r ,d,cir,area;
    printf("please enter r=");
    scanf("%d",&r);
    d=2*r;
    cir=2*3.14*r;
    area=3.14*(r*r);
    printf("Diameter of circle = %d units \n", d);
    printf("Circumference of circle = %d units \n", cir);
    printf("Area of circle = %d sq. units ", area);
}
