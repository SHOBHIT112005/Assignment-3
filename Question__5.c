#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x/1000==0)
    printf("Thhsi is a three digit number");
    else
    printf("This is not a three digit number");

    return 0;
}