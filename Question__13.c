#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x%3==0)
    {
        if(x%2==0)
        printf("This number is divisible by both 3 and 2");
        else
        printf("This number is divisible by 3 only");
    }
    else if (x%2==0)
    printf("This number is divisible by 2 only");
    else
    printf("This number is neither divisible by 3 nor 2");

    return 0;
}