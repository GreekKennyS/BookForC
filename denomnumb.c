#include <stdio.h>

int main()
{
    int num1,denum1,num2,denum2,result_num,result_denum;

    printf("Enter num1 and denum1: \n");
    scanf("%d/%d",&num1,&denum1);

    printf("Enter num2 and denum2: \n");
    scanf("%d/%d",&num2,&denum2);

    result_num = num1 * denum1 + num2 * denum2;
    result_denum = denum1 * denum2;

    printf("Result: %d/%d",result_num,result_denum);
    
    return 0;
}