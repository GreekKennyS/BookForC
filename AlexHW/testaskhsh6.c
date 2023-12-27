#include <stdio.h>
#include <string.h>

void gemismaPedion();

struct ypallhlos
    {
        char name[30];
        int arithmos_Mhtrwou;
        int eidos_Pthxiou;
        int wres_Yperwrias;
        int vasikos_Mhsfos;
    };

    struct ypallhlos yp1;
    struct ypallhlos yp2;


int main()
{
    gemismaPedion();

    printf("%s %3d %3d \n %3d %3d",yp1.name,yp1.arithmos_Mhtrwou,yp1.eidos_Pthxiou,yp1.wres_Yperwrias,yp1.vasikos_Mhsfos);

}

void gemismaPedion()
{
     

    strcpy(yp1.name,"Nikos");
    printf("Enter Arithmos_Mhtrwou: ");
    scanf("%d",&yp1.arithmos_Mhtrwou);

    printf("Enter Eidos_Pthxiou: ");
    scanf("%d",&yp1.eidos_Pthxiou);
    
    yp1.wres_Yperwrias = 100;
    yp1.vasikos_Mhsfos = 50;
}