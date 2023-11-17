#include <stdio.h>
#define FRACTION 4.0f/3.0f
int main()
{
    int radius = 10;
    float pi = 3.14f;
    float volume;
    
    volume = FRACTION*pi*radius*radius*radius;
    printf("%f\n",volume);

    return 0;
}