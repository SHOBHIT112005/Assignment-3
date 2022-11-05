#include<stdio.h>
int main()
{
    int x;
    printf("Enter year\n");
    scanf("%d",&x);
    if(x%4!=0)
    {
        int y;
        printf("Enter month number\n");
        scanf("%d",&y);
        if(y==2)
        printf("This month have 28 days");
        else if(y%2!=0)
        printf("This month have 31 days");
        else
        printf("This month have 30 days");
    }
    else
    {
         int y;
        printf("Enter month number\n");
        scanf("%d",&y);
        if(y==2)
        printf("This month have 29 days");
        else if(y%2!=0)
        printf("This month have 31 days");
        else
        printf("This month have 30 days");
    }
    return 0;
}