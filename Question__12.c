#include<stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet (case sensitive)\n");
    scanf("%c",&c);
    int x = c^1;
    if(x<=89)
    printf("This is a uppercase alphabet");
    else if(x>=96)
    printf("This is a lowercase aplhabet");

    return 0;
}