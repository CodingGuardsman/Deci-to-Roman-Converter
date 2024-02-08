//@file q.c
//@author Bryan Lee Kwan Hong (Kwanhong.lee)
//@course CSD1121F22
//@section Section A
//@tutorial Ass04
//@date 22/9/2022
//@brief This is the file q.c that contains the function that takes decimal values and converts them
//into roman numerals.

#include <stdio.h>
#include "q.h"

//This function lists all the special roman characters as well as the decimal characters. When user inputs a decimal,
//the console looks for roman numerals and prints the matching one to the counter, and then getting the remainder. 
//if the sum is lesser, then it goes to the next roman numeral it can find and then repeats the process until x becomes 0.
void decimal_to_roman(int x)
{
    int decimal[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char* romanNumerals[13] = {"M","CM","D","CD","C","XC", "L", "XL", "X", "IX", "V", "IV","I"};
    int counter = 0;
    while(x > 0)
    {
        if(x >= decimal[counter])
        {
            printf("%s",romanNumerals[counter]);
            x-=decimal[counter];
        }
        else
        {
            counter++;
        }
    }
            printf("\n");
}
