#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character\n");
    scanf("%c",&c);
    if((c>=65)&&(c<=90))
    printf("This is a upper case alphabet");
    else if((c>=97)&&(c<=122))
    printf("This is a lower case alphabet");
    else if((c>=48)&&(c<=57))
    printf("This is a digit");
    else
    printf("This is a special character");

    return 0;
}