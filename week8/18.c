#include<stdio.h>
#include<math.h>
void calculateCompoundInterest(float *,float *,float *,float *);
int main(){
    float p, t,r ,c;
    printf("Enter Principal (P): ");
    scanf("%f", &p);

    printf("Enter Time (T in years): ");
    scanf("%f", &t);

    printf("Enter Rate (R): ");
    scanf("%f", &r);
    SimpleInterest(&p,&t,&r,&c);
    printf("Compound Interest=%.2f",c);

}
void calculateCompoundInterest(float *p,float *t,float *r,float *c){
    *c = *p * (pow((1 + *r / 100), *t));

}