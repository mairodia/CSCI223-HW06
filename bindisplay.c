// ===========================================================================================
// File: bindisplay.c
// ===========================================================================================
// Programmer: Jennifer King
// Date: 2/21/2018
// Project: Bin Display
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//              This program translates base 10 integers into binary.
// ===========================================================================================

#include <stdio.h>

int main(void)
{
    unsigned int value;
    unsigned int MASK = 2147483648; //32 bits
    auto int counter = 0;

    printf("Enter an integer value: ");
    scanf("%d", &value);

    while(MASK > 0)
    {
        if(counter == 4) //for putting spaces
        {
            printf(" ");
            counter = 0;
        }

        if((value & MASK) == 0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }

        MASK = MASK >> 1;
        counter ++;
    }

    printf("\n");

    return 0;
}
