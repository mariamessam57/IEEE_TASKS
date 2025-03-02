#include<stdio.h>
int main(){
    int phy ,chem,bio,math,computer;
    float Percentage;
    printf("mark of math=");
    scanf("%d",&math);
    printf("mark of physics=");
    scanf("%d",&phy);
    printf("mark of bio=");
    scanf("%d",&bio);
    printf("mark of computer=");
    scanf("%d",&computer);
    printf("mark of chemistry=");
    scanf("%d",&chem);
    Percentage =((phy+chem+math+bio+computer)/500.0)*100;
    printf("%f\n",Percentage);
    if (math < 0 || math > 100 || phy < 0 || phy > 100 || bio < 0 || bio > 100 || 
        computer < 0 || computer > 100 || chem < 0 || chem > 100) {
        printf("Invalid marks entered! Marks should be between 0 and 100.\n");}
    else{
     if (Percentage >= 90)
    {
        printf("Grade A\n");
    }
    else if (Percentage >= 80)
    {
        printf("Grade B\n");
    }
    else if (Percentage >= 70)
    {
        printf("Grade C\n");

    }
    else if (Percentage >= 60)
    {
        printf("Grade D\n");
    }
    else if (Percentage >= 40)
    {
        printf(" Grade E\n");
    }
    else{
        printf("Grade F\n");
    }
}}