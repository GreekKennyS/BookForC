#include <stdio.h>

int main()
{
//1stProgram2Digits

    int n;

    printf("Enter a two digit number: ");
    scanf("%d",&n);
// 15 51
    n = ((n%10) * 10) + (n/10); 

    printf("Reversed: %d \n",n);

    printf("Enter a three digit number: ");
    scanf("%d",&n);


//2ndProgramExtendedTo3Digits

// 153 351
    n = ((n%10) * 100) + (((n/10) %10)*10) + (n/100); 

    printf("Reversed: %d",n);

    return 0;
}