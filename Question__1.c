#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if (x<0)
    printf("The number is negative");
    else
    printf("The number is positive");

    return 0;
}