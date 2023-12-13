#include <stdio.h>

int main()
{
    int mainphone,secondphone,thirdphone;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d -%d",&mainphone,&secondphone,&thirdphone);
   
    printf("You entered %d.%d.%d",mainphone,secondphone,thirdphone);

    return 0;
}