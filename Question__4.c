#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x&1)
    printf("This number is odd");
    else
    printf("This number is even");

    return 0;
}