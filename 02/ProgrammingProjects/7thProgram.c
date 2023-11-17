#include <stdio.h>

int main()
{
    int DollarBills,BillsOf20,BillsOf10,BillsOf5,BillsOf1;

    printf("Enter a dollar amount: \n");
    scanf("%d",&DollarBills);

    BillsOf20 = DollarBills/20;
    BillsOf10 = (DollarBills%20)/10 ;
    BillsOf5 = (DollarBills%30)/5;
    BillsOf1 = (DollarBills%20)%10/1;   

    printf("$20 Dollar Bills: %d \n",BillsOf20);
    printf("$10 Dollar Bills: %d \n",BillsOf10);
    printf("$5 Dollar Bills: %d \n",BillsOf5);
    printf("$1 Dollar Bills: %d \n",BillsOf1);

    return 0;
}