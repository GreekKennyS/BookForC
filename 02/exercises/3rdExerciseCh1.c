/*****************************************************************************
 *  Name: Calculator Of A Box                                                *
 *  Purpose: Calculation of Dimensions and weight                            *
 *  with input from user xyz                                                 *
 *  Date:31/10/2023                                                          *
 *  Author: Me, Georgie                                                      *
 *****************************************************************************/
#include <stdio.h>
#include <math.h>
#define INCHES_PERPOUND 166
int main()
{
    int height = 10;
    int length = 8;
    int width = 10;
    double volume,weight;

    printf("Enter height: \n");
    scanf("%d",&height);
    getchar();

    printf("Enter length: \n");
    scanf("%d",&length);
    getchar();

    printf("Enter width: \n");
    scanf("%d",&width);
    getchar();

    volume = height * length * width;

    printf("The Dimensions are: %dx%dx%d \n",length,width,height);
    printf("The volume is: %.2lf (cubic inches)\n",volume);
    printf("The weight of the box is: %.2lf (pounds)\n",(volume + 165)/INCHES_PERPOUND);

    return 0;
}