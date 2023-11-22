#include <stdio.h>

int main()
{
    int i,y,y2;
    float x;
    char string[10];
    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d \n",i,i,i,i); //%e scientific numbers
    printf("|%10.3f|%10.3e|%-10g \n",x,x,x); //%g makes 3.3200000 to 3.32 ignores 0s*

    printf("Enter two numbers: \n");
    scanf("%i",&y);
    scanf("%s",string);
    printf("%s hm \n",string);
    printf("1:%d",y);

    return 0;
}