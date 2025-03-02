#include <stdio.h>
#include<math.h>

int main()
{
    int days,weeks;
    int years;
    printf("please enter days=");
    scanf("%d",&days);
    years=days/360;
    weeks=(days%360)/7;
    printf("years=%d\n",years);
    printf("weeks=%d",weeks);
}
