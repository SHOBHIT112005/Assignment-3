#include<stdio.h>
int main()
{
    int x;
    printf("Enter an integer\n");
    scanf("%d",&x);
    if(x<0)
    printf("This is an negative number");
    else if (x>0)
    printf("This is a positive number");
    else
    printf("This number is zero");

    return 0;;
}