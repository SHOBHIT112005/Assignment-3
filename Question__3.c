#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x%2==0)
    printf("This number is even");
    else
    printf("This number is odd");

    return 0;
}