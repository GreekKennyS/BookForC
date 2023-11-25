#include <stdio.h>

int main(int argc, char *argv[])
{
    //ASKHSH 1
    int apostashcm;

    printf("Enter CM: \n");
    scanf("%d",&apostashcm);

    printf("Klimaka: %f \n",apostashcm/200000.0);


    //ASKHSH 2

    int bytes;

    printf("Enter Bytes: \n");
    scanf("%d",&bytes);

    printf("Amount of Kilobyte or Kilobytes: %f \n",bytes/1024.0);

    //ASKHSH 3
    float timh,posopelat,telikoposo,resta;

    printf("Dwse Timh kai to poso pou edwse o pelaths: \n");
    scanf("%f %f",&timh,&posopelat);

    telikoposo = timh + timh * 0.24;
    resta = posopelat - telikoposo;

    printf("To teliko poso einai %.2f kai ta resta tou pelath einai %.2f \n",telikoposo,resta);


    //ASKHSH 4
    float kafares_ypodoxes,krathseis,hmeres,misfos;

    printf("Enter amount of days that you worked: \n");
    scanf("%f",&hmeres);

    misfos = hmeres * 55;
    krathseis = misfos * 0.12;
    kafares_ypodoxes = misfos - krathseis;

    printf("Kafares ypodoxes:%f  Kai to poso krathsewn einai: %f \n",kafares_ypodoxes,krathseis);


    //ASKHSH 5
    
    float eisodhma,foros;

    printf("Enter eisodhma: \n");
    scanf("%f",&eisodhma);
    
    if (eisodhma <= 700)
    {
        foros = 0.05;
    }
    else if (eisodhma <= 1200)
    {
        foros = 0.15;
    }else if (eisodhma <= 2000)
    {
        foros = 0.25;
    }else
    {
        foros = 0.35;
    }
    printf("Prepei na plhrwsei: %f me suntelesth: %.1f%% \n",eisodhma * foros,foros * 100);
    
    
    //ASKHSH 6

    float a,b,c,MO;
    
    MO = 10000;
    
    printf("Dwse Epidwseis: \n");
    scanf("%f%f%f",&a,&b,&c);
    if (a < 0 && b < 0 && c < 0 )
    {
        printf("You entered a negative amount \n");

    }else if (a < 9.86 || b < 9.86|| c < 9.86)
    {
        printf("Paneurwpaiko Record \n");
        MO = (a + b + c)/3;
    }
    else
    {
        MO = (a + b + c)/3;
    }
    if (MO < 12)
    {
        printf("Prokrifike ston teliko");
    }
    
    
    return 0;
}