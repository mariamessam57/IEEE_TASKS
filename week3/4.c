#include<stdio.h>
#include<stdlib.h>
int main(){
    int len ,wid , per;
    printf("enter length=");
    scanf("%d",&len);
    printf("enter width=");
    scanf("%d",&wid);
    per=2*(len+wid);
    printf("perimeter of rectangle=%d",per);

}