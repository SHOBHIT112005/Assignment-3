#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three numbers\n");
    scanf("%d\n%d\n%d",&x,&y,&z);
    if(x>y)
       if(x>z)
       printf("%d is largest",x);
       else
       printf("%d and %d are same",x,z);
    else if(y>z)
    printf("%d is largest",y);
    else
    printf("%d %d %d are same",x,y,z);

    return 0;
}