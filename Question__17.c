#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of a triangle\n");
    scanf("%d  %d  %d",&a,&b,&c);
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
            printf("A triangle with these sides exists");
            else
            printf("This triangle does not exists");
        }
        else
        printf("This triangle does not exixts");
    }
    else
    printf("This triangle does not exists");

    return 0;
}