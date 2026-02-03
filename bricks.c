#include <stdio.h>

int main() {
    int big,small,goal;
    int required=goal/5;
    printf("enter number of small bricks:");
    scanf("%d",&small);
    printf("enter number of big bricks :");
    scanf("%d",&big);
    printf("enter goal length:");
    scanf("%d",&goal);
    if(required<=big)
    {
        int rem=goal-(required*5);
        if(rem<=small)
        {
            printf("false");
        }
        }
        else
        {
            int rem1=goal-(big*5);
            if(rem1<=small)
            {
                printf("true");
            }
            else
            {
                printf("false");
            }
        }
}