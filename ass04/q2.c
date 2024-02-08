/*!
@file       q.c 
@author     Shawn Chan Weng Kwang (shawnwengkwang.chan@digipen.edu)
@course     csd1121f22 High level Programming
@section    A
@assignment 4
@date       22/09/2022
@brief      This file contains the decimal_to_roman function for assignment 4.
*//*_________________________________________________________________________*/

#include <stdio.h> // for printf
/* For testing purposes
int main(void){
    decimal_to_roman(1234);
    printf("thousands: %d hundreds %d tens %d ones %d \n",thousands, hundreds, tens, ones);
    return 0;
    }

    // Contigency if some bugger tried to be funny
    if(x<1 || x>3999){
    printf("Invalid Input, number is not in the range of 0-4000");
    }    
*/

/*!
@brief: the function takes an integer input which is stored in x,then we declare 
some variables to store each denomination, after which according to the variables,
print out the roman numeral of that specific number that it belong to.

@return:
outputs the integer value in Roman numerals
*//*______________________________________________________________*/
int decimal_to_roman(int x)
{
    // declaring variables to store int of each denomination
    int thousands = 0, hundreds = 0, tens = 0, ones = 0;
    
    // check if within the range of thousands, hundreds, tens and ones
    if(x<10){
        ones = x;
    }
    if(x<100 && x>9){
        tens = x/10;
        ones = x%10;
    }
    if(x<1000 && x>99){
        hundreds = x/100;
        tens = (x%100)/10;
        ones = (x -(hundreds*100)-(tens*10));
    }
    if(x<4000 && x>999){
        thousands = x/1000;
        hundreds = ((x%1000))/100;
        tens = (x-(thousands*1000)-(hundreds*100))/10;
        ones = (x -(thousands*1000)-(hundreds*100)-(tens*10));
    }

    // Contigency if some bugger tried to be funny
    if(x<1 || x>3999){
        printf("Invalid Input, number is not in the range of 0-4000");
    }
    
    // Checks for the scenarios and print accordingly
    if(thousands>0 && thousands<4){
        // the counter will start the the number and will minus accordingly until 1
        // e.g if counter = 3 -> 3,2,1 which is looped 3 times
        for (int counter = thousands; counter > 0; counter--)
        {
            printf("M");
        }
    }
    if(hundreds>0){
        if(hundreds<4){
            for (int counter = hundreds; counter > 0; counter--)
            {
            printf("C");
            }
        }
        if(hundreds==4){
            printf("CD");
        }
        if(hundreds==5){
            printf("D");
        }
        if(hundreds>5 && hundreds<9){
            printf("D");
            // the counter will start the the number and will minus accordingly until 6
            // e.g if counter = 8 -> 8,7,6 which is looped 3 times
            for (int counter = hundreds; counter > 5; counter--)
            {
            printf("C");
            }            
        }
        if(hundreds==9){
            printf("CM");
        }
    }
    if(tens>0){
        if(tens<4){
            for (int counter = tens; counter > 0; counter--)
            {
            printf("X");
            }
        }
        if(tens==4){
            printf("XL");
        }
        if(tens==5){
            printf("L");
        }
        if(tens>5 && tens<9){
            printf("L");
            for (int counter = tens; counter >5; counter--)
            {
            printf("X");
            }    
        }
        if(tens==9){
            printf("XC");
        }
    }
    if(ones>0){
        if(ones<4){
            for (int counter = ones; counter > 0; counter--)
            {
            printf("I");
            }
        }
        if(ones==4){
            printf("IV");            
        }
        if(ones==5){
            printf("V");
        }
        if(ones>5 && ones<9){
            printf("V");
            for (int counter = ones; counter > 5; counter--)
            {
            printf("I");
            }    
        }
        if(ones==9){
            printf("IX");
        }
    }
    
    // Leave a line space after printing the roman numeral
    printf("\n");
return 0;
}
