#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a quadratic equation in the format ax^2+bx+c\n");
    scanf("%dx^2+%dx+%d",&a,&b,&c);
    if((b*b)>4*a*c)
    printf("The roots of given quadratic equation are real and distinct");
    else if((b*b)<4*a*c)
    printf("The roots of given quadratic equation are imaginary");
    else
    printf("The roots of given quadratic equation are real and equal");

    return 0;
}