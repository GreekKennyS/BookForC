#include <stdio.h>

int main()
{
    int j = 0,n[16],rowsum[4],columnsum[4],diagsum[4],k = 0;

    for (int i = 0; i < 16; i++)
    {
        printf("Enter number from 1 to 16: ");
        scanf("%d",&n[i]);
    }
    for (int i = 1; i <= 16; i++)
    {
        columnsum[k] += columnsum[k] + n[i + 1];
        rowsum[j] += rowsum[j] + n[i];
        printf("%3d",n[i]);
        if (i%4 == 0)
        {
            printf("\n");
            j++;
        }
        if (i%2 == 0)
        {
            k++;
        }
        
    }
    for (int i = 0; i < 16; i+= 5)
    {
        diagsum[i] = diagsum[i] + n[i];
    }
    
    
    printf("Row sums: %3d%3d%3d%3d",rowsum[0],rowsum[1],rowsum[2],rowsum[3]);
    printf("Column sums: %3d%3d%3d%3d",columnsum[0],columnsum[1],columnsum[2],columnsum[3]);
    printf("Diagonal sums: %3d%3d",diagsum[0],diagsum[1]);
    
    return 0;
}