#include <stdio.h>
void main()
{
    int cigars;
    int weekend;
    printf("enter the cigars \n");
    scanf("%d",&cigars);
    printf("enter 1 for weekend \t 0for not weekend \n");
    scanf("%d",&weekend);
    if(weekend)
    {
        if(cigars>=40)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        if(cigars>=40&&cigars<=60)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
        }
}