#include<stdio.h>

int isprime(int);
void printprime(int,int);
int main (){
    int start , end;

    printf("please enter start number:");
    scanf("%d",&start);

    printf("please enter end number:");
    scanf("%d",&end);

    if (start>end)
    {
        printf("invaild range please enter correct numbers");
    }
    else{
    
    printprime(start,end);
    
    }

}

void printprime(int start, int end){
    printf("number between %d and %d is\n",start,end);
    for (int i = start; i <=end; i++)
    {
        if(isprime(i)){
            printf("%d\n",i);
        }
     }
}


int isprime(int num )

{
   if (num<=1){ 
    return 0;
   }
    for (int i=2; i*i<=num; i++){ //display prime
        if (num % i == 0) //check if it divided on any number to its seq root 
        {
            return 0;
        }
       }
           return 1; 
 }