#include <stdio.h>

int main()
{
    int itemnum,mm,dd,yyyy;
    float unitprice;

    printf("Enter item number: ");
    scanf("%d",&itemnum);

    printf("Enter unit price: ");
    scanf("%f",&unitprice);

    printf("Enter purchase date: (mm/dd/yyyy) : ");
    scanf("%d /%d /%d",&mm,&dd,&yyyy);

    printf("Item \t\t Unit \t\t Purchase\n \t\t Price \t\t Date\n %d \t\t $%8.2f \t %.2d/%.2d/%.4d",itemnum,unitprice,mm,dd,yyyy);

    return 0;
}