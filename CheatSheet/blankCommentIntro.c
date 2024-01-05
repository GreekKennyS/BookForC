/*****************************************
 *  Name:                                *
 *  Purpose:                             *
 *  Date:                                *
 *  Author: Me, Georgie                  *
 *****************************************/
#include <stdio.h>

int add(int,int);

struct eep
{
    int eepnum;
};

int main()
{
    int sum;

    struct eep hmm;
    struct eep hmm2;

    hmm.eepnum = 5;
    hmm2.eepnum = 10;

    sum = add(hmm.eepnum,hmm2.eepnum);


    printf("it is %d",sum);

    return 0;
}
int add(int x,int y)
{

    return x + y;
}