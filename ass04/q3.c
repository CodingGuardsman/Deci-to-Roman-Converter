//@file q.c
//@author Bryan Lee Kwan Hong (Kwanhong.lee)
//@course CSD1121F22
//@section Section A
//@tutorial Ass04
//@date 22/9/2022
//@brief This is the file q.c that contains the function that
// takes decimal values and converts them
//into roman numerals.

#include <stdio.h>
#include "q.h"

//this definition of function decimal_to_roman
//converts decimal to roman converts decimals values into
//roman numerals.
void decimal_to_roman(int x) 
{
    char RomanNumerals [8] = {'I','V','X','L','C','D','M',' '};
    int DeciNumerals [8] = {1,5,10,50,100,500,1000,5000};
                        // 0 1 2 3  4  5   6    7 

    for (int counter = 6; counter >=0; counter-=2)
    {
        if (x >= DeciNumerals[counter+1])
        {
            printf("%c", RomanNumerals[counter+1]);
        }
        if (x >= DeciNumerals[counter]) 
        {
        int count = x%DeciNumerals[counter+1]; // whole value
        if (x==4) 
        {
                printf("IV");
        }
        else if (x==9) 
        {
                printf("IX");
        }
        else 
        {
            for (int i = 0; i < count; i++)
            {
                    printf("%c", RomanNumerals[counter]);     
            }
        }
            x%=DeciNumerals[counter]; // remainder
        }
    }
}
