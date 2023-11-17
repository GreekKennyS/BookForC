#include <stdio.h>

int main()
{
    int x,finalValue;
    

    printf("Enter value of x: \n");
    scanf("%d",&x);

    finalValue = ((((3*x + 2)* x - 5)* x - 1)*x + 7)*x - 6;

    printf("Final Value of x: %d \n",finalValue);
    return 0;
}