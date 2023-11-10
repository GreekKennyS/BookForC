#include <stdio.h>

int main()
{
    float money;
    float tax;
    float finalAmount;

    printf("Enter the amount of money Dollars and Cents: \n");
    scanf("%f",&money);

    finalAmount = money*0.05+money;

    printf("Final amount with tax included is: %f\n",finalAmount);

    return 0;
}