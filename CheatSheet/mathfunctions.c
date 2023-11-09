/**********************************************************
 *  Name: MathFunctions with math.h                       *
 *  Purpose: To look at it and remember what it does      *
 *  Date:31/10/2023                                       *
 *  Author: Me, Georgie                                   *
 **********************************************************/
#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(25);        //square root of 25
    double B = pow(5, 2);       //5 is base 2 is power
    int C = round(3.14);        //simple rounding up
    int D = ceil(153.10);       //rounding up regardless of number
    int E = floor(3.75);        //rounding down regardless of number
    double F = abs(-2130);      //turns negative number to positive
    double H = sin(90);         //hmitono
    double I = cos(45);         //sinhmitono
    double J = tan(90);         //efaptomenh
    double G = log(1000);       //log :) 

    printf("%.1lf\t",F);        

    printf("%d\t",E);                                 
                               
return 0;
}