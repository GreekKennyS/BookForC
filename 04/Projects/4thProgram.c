#include <stdio.h>

int main()
{
    int og,n;

    printf("Enter a number between 0 and 23,767: ");
    scanf("%d",&og);
    n = og;
//1953 03641
    og = (og%8) + (og/8%8*10)+(og/8/8%8*100)+(og/8/8/8%8*1000);
    printf("In octal, your number is : %.5d \n",og);
    
    printf("OR ig this %d%d%d%d%d",n/4096%8,n/512%8,n/64%8,n/8%8,n%8);

    return 0;
}