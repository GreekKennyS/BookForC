#include <stdio.h>

int main()
{
    float loan,interest,pmonth,minterest,balance;
    
    printf("Enter amount of loan: \n");
    scanf("%f",&loan);

    printf("Enter interest rate: \n");
    scanf("%f",&interest);

    printf("Enter monthly payment : \n");
    scanf("%f",&pmonth);

    balance = loan;
    
    minterest = (interest/100)/12;
    
    
    balance = (balance - pmonth) + (balance * minterest);
    
    printf("Balance remaining after first payment: $%.2f \n",balance);
    
    balance = (balance - pmonth) + (balance * minterest);
    
    printf("Balance remaining after second payment: $%.2f \n",balance);

    balance = (balance - pmonth) + (balance * minterest);

    printf("Balance remaining after third payment: $%.2f \n",balance);

    return 0;
}