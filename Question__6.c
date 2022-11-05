#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d\n%d",&x,&y);
    if(x<y)
    printf("%d is less than %d",x,y);
    else if(x>y)
    printf("%d is more than %d",x,y);
    else
    printf("One of the number is %d",x);

    return 0;
}