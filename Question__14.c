#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x%7==0)
    printf("This number is divisible by 7");
    else if(x%3==0)
    printf("This number is divisible by 3");
    else
    printf("This number is neither divisible by 7 nor 3");

    return 0;
}