#include <stdio.h>

int main()
{
    int n[16];


    
    for (int i = 1; i <= 16; i++)
    {
        printf("Enter number from 1 to 16: ");
        scanf("%d",&n[i]);
    }
    for (int i = 1; i <= 16; i++)
    {
       
        printf("%3d",n[i]);
        if (i%4 == 0)
        {
            printf("\n");
            
        }
      
        
    }
 
    
    
    printf("\nRow sums:%3d%3d%3d%3d\n",n[1]+n[2]+n[3]+n[4],n[5]+n[6]+n[7]+n[8],n[9]+n[10]+n[11]+n[12],n[13]+n[14]+n[15]+n[16]);
    printf("Column sums:%3d%3d%3d%3d\n",n[1]+n[5]+n[9]+n[13],n[2]+n[6]+n[10]+n[14],n[3]+n[7]+n[11]+n[15],n[4]+n[8]+n[12]+n[16]);
    printf("Diagonal sums:%3d%3d\n",n[1]+n[6]+n[11]+n[16],n[4]+n[7]+n[10]+n[13]);
    
    return 0;
}