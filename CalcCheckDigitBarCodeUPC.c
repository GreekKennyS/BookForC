#include <stdio.h>

int main()
{
    int digits[11],result,first_sum,second_sum,j;

    for (int i = 0; i < sizeof(digits)/sizeof(digits[0]); i++)
    {
        printf("Enter the %d digit: ",i+1);
        scanf("%d",&digits[i]);
    }
    
    first_sum = (digits[0] + digits[2] + digits[4] + digits[6] + digits[8] + digits[10]) * 3;
   
    second_sum = digits[1] + digits[3] + digits[5] + digits[7] + digits[9];

    result = 9 - (first_sum + second_sum - 1) % 10;
    
    result = 9 - ((digits[0] + digits[2] + digits[4] + digits[6] + digits[8] + digits[10]) * 3 +
     (digits[1] + digits[3] + digits[5] + digits[7] + digits[9] - 1))%10;
    
    printf("result is %d",result);

    return 0;
}