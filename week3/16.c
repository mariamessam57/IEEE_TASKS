#include<stdio.h>

int main(){
 int sub1,sub2,sub3,sub4,sub5;
 int total;
 float av ,per=1;
 printf("please enter mark of sub1=");
 scanf("%d",&sub1);
 printf("please enter mark of sub2=");
 scanf("%d",&sub2);
 printf("please enter mark of sub3=");
 scanf("%d",&sub3);
 printf("please enter mark of sub4=");
 scanf("%d",&sub4);
 printf("please enter mark of sub5=");
 scanf("%d",&sub5);
 
 total=(sub1+sub2+sub3+sub4+sub5);
 av=total/5;
 per=(total/500.0)*100;
 printf("total=%d\n",total);
 printf("avarege=%.3f\n",av);
 printf("percntage=%.3f\n",per);


}