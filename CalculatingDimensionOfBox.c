/*****************************************************************************
 *  Name: Calculator Of A Box                                                *
 *  Purpose: Calculation of Dimensions and weight                            *
 *  Date:31/10/2023                                                          *
 *  Author: Me, Georgie                                                      *
 *****************************************************************************/
#include <stdio.h>
#include <math.h>

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
    weight = volume/166;
    weight = ceil(weight);

    printf("The weight of the box is:%lf \n",weight);

    return 0;
}