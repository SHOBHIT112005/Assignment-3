#include<stdio.h>
int main()
{
    float CP,SP;
    printf("Enter the Cost price(CP) and Selling price(SP) of the product\n");
    scanf("CP=%f\nSP=%f",&CP,&SP);
    if(CP<SP)
    {
        float Profit=SP-CP;
        float Profit_Percentage =(Profit/CP)*100;
        printf("%f is the profit %%",Profit_Percentage);
    }
    else
    {
        float Loss=CP-SP;
        float Loss_Percentage=(Loss/CP)*100;
        printf("%f is the loss %%",Loss_Percentage);
    }

    return 0;
}