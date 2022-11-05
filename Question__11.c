#include<stdio.h>
int main()
{
    int Phy,Chem,Mat,Eng,Phy_Edu;
    printf("Enter the marks of all subjects\n");
    scanf("Phy-%d  Chem-%d  Mat-%d  Eng-%d  Phy_Edu-%d",&Phy,&Chem,&Mat,&Eng,&Phy_Edu);
    int SUM = Phy+Chem+Mat+Eng+Phy_Edu;
    if(SUM<33)
    printf("Sorry you are failed");
    else
    printf("Congrats you are passed");

    return 0;
}