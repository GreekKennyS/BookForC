#include <stdio.h>
#define FRACTION 4.0f/3.0f
int main()
{
    int radius;
    float pi = 3.14f;
    float volume;
    
    printf("Enter radius of sphere: \n");
    scanf("%d",&radius);

    volume = FRACTION*pi*radius*radius*radius;
    printf("%f\n",volume);

    return 0;
}