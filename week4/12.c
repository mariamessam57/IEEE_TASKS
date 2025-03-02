#include<stdio.h>
int main(){
    int monthnum;
    printf("enter month number ( between 1 and 12)");
    scanf("%d",&monthnum);
    if (monthnum<1 || monthnum>12)
    {
        printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }
    
   else  if (monthnum==2)
    {
        printf("number of days=28 or 29 (depends on the year)");
    }
    else if (monthnum==4 || monthnum==6 ||monthnum==9 || monthnum==11){
        printf("number of days = 30");
    }
    else{
        printf("number of days=31");
    }
    
} 
