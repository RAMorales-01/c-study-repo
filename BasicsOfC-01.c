#include <stdio.h>

/*  In this file I try to follow the code examples of the first pages of the book
*   until the test and example for the temp conversion program from celsius to 
*   fahrenheith.
*/

/*Notes:
    *   %d = prints as decimal number
    *   %6d = print as decimal interger, at least 6 chars wide
    *   %f = print as floating point
    *   %6f = print as floating point, at least 6 chars wide
    *   %.2f = print as floating point, 2 chars after decimal point 
    *   %6.2f = print as floating, at least 6 wide and 2 after decimal point   
*/

void TempConverterA()
{
    float fahrenheith, celsius;

/*Note:  
    *   Changed the code following the book recomendation about 
    *   avoiding the magic numbers by using the define line
*/

    #define LOWLIMIT  0 // lowest limit for the conversion table 
    #define TOPLIMIT  300 // Highest limit for the conversion table
    #define STEP  20 // Increments to 20 on each new iteration

    fahrenheith = 32;
    celsius = LOWLIMIT;
    
    printf("\tF\t\tC\n");
    printf("\n");

    // prints a simple conversion table from Fahrenheith to Celsius

    while(fahrenheith <= TOPLIMIT)
    {
        printf("\t%.1f\t\t%.1f\n", fahrenheith, celsius);
        fahrenheith = fahrenheith + STEP;
        celsius = (fahrenheith - 32.0) * 5.0/9.0;
    }

    // initialize the celsius and fahrenheith variables back to its initial values
    fahrenheith = 32;
    celsius = LOWLIMIT;

    // prints a simple conversion table from Celsius to Fahrenheith

    printf("\tC\t\tF\n");
    printf("\n");

    while(celsius <= TOPLIMIT)
    {
        printf("\t%.1f\t\t%.1f\n", celsius, fahrenheith);
        celsius = celsius + STEP;
        fahrenheith = celsius * (9.0/5.0) + 32;
    }
}
void TempConverterB()
{
    // the next code is a variation of the previous loop, but this time is a for loop

    float fahrenheith2;
    float celsius2 = 0;

    printf("\tF\t\tC\n");
    printf("\n");

    for(fahrenheith2 = 32; fahrenheith2 <= 300; fahrenheith2 += 20)
    {
        celsius2 = (fahrenheith2 - 32) * 5/9;
        printf("\t%.1f\t\t%.1f\n", fahrenheith2, celsius2);
    }
}

int main()
{
    // TempConverterA();
    // TempConverterB();

    return 0;
}