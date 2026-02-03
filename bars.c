#include <stdio.h>

void main()
{
    int small,big,goal;
    printf("enter no of small bars");
    scanf("%d",&small);
    printf("enter no of big bars");
    scanf("%d",&big);
    printf("enter the weight of cake");
    scanf("%d",&goal);
     int required=goal/5;
    if(required<=big)
    {
        int rem=goal-(required*5);
        if(rem<=small)
        {
            printf("%d",rem);
        }
        else
        {
            printf("-1");
        }
    }
    else
    {
        int rem1=goal-(big*5);
        if(rem1<=small)
        {
            printf("%d,rem1");
        }
        else
        {
            printf("-1");
        }
    }
    }
