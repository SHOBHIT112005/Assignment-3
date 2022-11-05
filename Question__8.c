#include<stdio.h>
int main()
{
    int x;
    printf("Enter the year\n");
    scanf("%d",&x);
    if(x%4==0)
    printf("This is a leap year");
    else
    printf("This is not a leap year");

    return 0;
}