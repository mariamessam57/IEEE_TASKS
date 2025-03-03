#include<stdio.h>
float cube(float);
int main(){
    float num, c;
    printf("enter number=");
    scanf("%f",&num);
    c=cube(num);
    printf("the cube = %.3f",c);

}
float cube(float num){
   return num*num*num;
}