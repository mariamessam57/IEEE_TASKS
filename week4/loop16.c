#include<stdio.h>

int revrsenum( int num){
        int reversed = 0;  
         while (num != 0) {
         int reminder = num % 10; 
         reversed = reversed * 10 + reminder; 
         num = num / 10;  
     }
          return reversed;
    }
int main(){
    int num,rev;
    printf("enter number:");
    scanf("%d",&num);
   rev= revrsenum(num);
   printf("reversed number=%d",rev);
}