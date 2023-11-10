#include <stdio.h>

int main()
{
    int x,finalValue;
    

    printf("Enter value of x: \n");
    scanf("%d",&x);

    finalValue = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) -(x*x) + (7*x) - 6;

    printf("Final Value of x: %d \n",finalValue);
    return 0;
}