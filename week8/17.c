#include<stdio.h>
void SimpleInterest(float*,float*,float* ,float*);
int main(){
    float p, t,r ,s;
    printf("Enter Principal (P): ");
    scanf("%f", &p);

    printf("Enter Time (T in years): ");
    scanf("%f", &t);

    printf("Enter Rate (R): ");
    scanf("%f", &r);
    SimpleInterest(&p,&t,&r,&s);
    printf("SimpleInterest=%f",s);
}
void SimpleInterest(float *p,float *t,float *r ,float*s){
    *s=(*p * *t * *r)/100;
    }