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
    int height,length,width;
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
    weight = volume/INCHES_PERPOUND;
    weight = ceil(weight);

    printf("The Dimensions are: %dx%dx%d \n",length,width,height);
    printf("The volume is: %.2lf (cubic inches)\n",volume);
    printf("The weight of the box is: %.2lf (pounds)\n",weight);

    return 0;
}