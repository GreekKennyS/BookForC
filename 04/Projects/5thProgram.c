#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,result,first_sum,second_sum;

    
        printf("Enter the digit: ");
        scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
    
    
    first_sum = (n1 + n3 + n5 + n7 + n9 + n11) * 3;
   
    second_sum = n2 + n4 + n6 + n8 + n10;

    result = 9 - ((first_sum + second_sum) - 1)% 10;
    
    
    printf("result is %d",result);

    return 0;
}