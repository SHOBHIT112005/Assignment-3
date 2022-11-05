#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x%5==0)
    printf("This number i divisible by 5");
    else
    printf("This nymber is not divisible by 5");

    return 0;
}