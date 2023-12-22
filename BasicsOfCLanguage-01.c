#include <stdio.h>

int main()
{

    float fahrenheith, celsius;
    int lowLimit, topLimit, step; 

    lowLimit = 0; 
    topLimit = 300;
    step = 20; /*Increments 20 on each iteration*/

    fahrenheith = 32;
    celsius = lowLimit;
    
    printf("\tF\t\tC\n");

    /*prints a simple conversion table from Fahrenheith to Celsius*/

    while(fahrenheith <= topLimit)
    {
        printf("\t%.1f\t\t%.1f\n", fahrenheith, celsius);
        fahrenheith = fahrenheith + step;
        celsius = (fahrenheith - 32.0) * 5.0/9.0;
    }

    /*Returns the celsius and fahrenheith vars back to its initial values*/
    fahrenheith = 32;
    celsius = lowLimit;

    /*prints a simple conversion table from Celsius to Fahrenheith*/

    printf("\tC\t\tF\n");

    while(celsius <= topLimit)
    {
        printf("\t%.1f\t\t%.1f\n", celsius, fahrenheith);
        celsius = celsius + step;
        fahrenheith = celsius * (9.0/5.0) + 32;
    }
    /*Notes:
    *   %d = prints as decimal number
    *   %6d = print as decimal interger, at least 6 chars wide
    *   %f = print as floating point
    *   %6f = print as floating point, at least 6 chars wide
    *   %.2f = print as floating point, 2 chars after decimal point 
    *   %6.2f = print as floating, at least 6 wide and 2 after decimal point   
    */

}