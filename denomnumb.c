#include <stdio.h>

int main()
{
    int num1,denom1,num2,denom2,result_num,result_denom;

    printf("Enter num1 and denum1: \n");
    scanf("%d /%d",&num1,&denom1);

    printf("Enter num2 and denum2: \n");
    scanf("%d /%d",&num2,&denom2);

    result_num = num1 * denom1 + num2 * denom2;
    result_denom = denom1 * denom2;

    printf("Result: %d/%d",result_num,result_denom);
    
    return 0;
}