#include <stdio.h>

int main()
{
    int ISBN,GSI_prefix,Group_Identifier,Publisher_code,Item_number,Check_digit;

    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d",&GSI_prefix,&Group_Identifier,&Publisher_code,&Item_number,&Check_digit);

    printf("GSI prefix: %3d \n",GSI_prefix);
    printf("Group Identifier: %1d \n",Group_Identifier);
    printf("Publisher code: %3d \n",Publisher_code);
    printf("Item number: %5d \n",Item_number);
    printf("Check digit: %1d \n",Check_digit);

    return 0;
}