#include <stdio.h>
#define SCALE_FACTOR (5.0f/9.0f)
#define FREEZING_POINT 32.0f
int main()
{
    double C,F;
    
    printf("Enter Fahrenheit temperature: ");
    scanf("%lf",&F);

    C = (F-FREEZING_POINT)+ SCALE_FACTOR;
    printf("The converted temperature from Fahrenheit to Celcius is: %lf \n",C);
    
    return 0;
}