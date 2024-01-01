#include <stdio.h>

int main()
{
    int digits[11],result,first_sum;

    for (int i = 0; i < sizeof(digits)/sizeof(digits[0]); i++)
    {
        printf("Enter the %d digit: ",i+1);
        scanf("%d",&digits[i]);
    }
    
    result = ((digits[0] + digits[2] + digits[4] + digits[6] + digits[8] + digits[10]) * 3 +
     (digits[1] + digits[3] + digits[5] + digits[7] + digits[9] - 1))%10 - 9;
    
    
    printf("result is %d",result);

    return 0;
}