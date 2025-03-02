#include<stdio.h>
int main (){
    int day;
    printf("enter day number:");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
    printf("Saturday");
        break;
    case 2:
        printf("Sunday");
            break;
    case 3:
      printf("Monday");
            break;

    case 4:
        printf("Tuesday");
            break;
    case 5:
        printf("Wednesday");
            break;
    case 6:
         printf("Thursday");
            break;
    case 7: 
            printf("Friday");
            break;
    
    default:
         printf("Invalid input! Please enter week number between 1-7."); 
        break;
    }
}