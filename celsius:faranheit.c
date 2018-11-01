/*A-Nony-Mus
 13 Feb. 2012
 this program converts between degrees celsius, faranheit, and kelvin based on user input*/

#include <stdio.h>
#define KELVIN_NUMBER 273.15

//function prototypes
double conversion(double x, char y);

int
main(void)
{

char input,
    k_input;
    
double int_temp,
    converted_temp,
    temp3;

k_input = 99;
    
//gather the necessary inputs from the user
printf("would you like to convert celsius (c), faranheit (f), or kelvin (k)? ");
scanf("%c", &input);
printf("what temperature would you like to convert? ");
scanf("%lf", &int_temp);
    

//how to calculate the temperatures if the input is kelvin
if (input == 107)
{
converted_temp = int_temp - KELVIN_NUMBER;
temp3 = conversion(converted_temp, k_input);
}
else if (input == 99 || 102)//how to calculate the temperatures if the input is celsius or faranheit
{
converted_temp = conversion(int_temp, input);
    if (input == 99) {
        temp3 = int_temp + KELVIN_NUMBER;
    }
    else
        temp3 = converted_temp + KELVIN_NUMBER;
}

//display the temperatures
if (input == 99) //if the original input was celsius
{
    printf("your temperature, in\n");
    printf("degrees celsius is %9.2f\ndegrees farenheit is %7.2f\ndegrees kelvin is %10.2f\n", int_temp, converted_temp, temp3);
}
else if (input == 102) //if the original input was faranheit
{

    printf("your temperature, in\n");
    printf("degrees farenheit is %7.2f\ndegrees celsius is %9.2f\ndegrees kelvin is %10.2f\n", int_temp, converted_temp, temp3);
}
else if (input == 107)
{
    printf("your temperature, in\n");
    printf("degrees kelvin is %10.2f\ndegrees celsius is %9.2f\ndegrees faranheit is %7.2f\n", int_temp, converted_temp, temp3);
}
else
printf("I'm sorry, that was not one of the inputs\n");


return(0);
}

/*Inputs: the input number and the character to determine whether it is faranheit or celsius
Output: the temperature converted to the other unit of measurement*/
double conversion(double x, char y)
{
    double temp;
    
    if (y == 99) //celsius to faranheit
        temp = ((x * 9)/5) + 32;
    else if (y == 102) //faranheit to celsius
        temp = ((x - 32) * 5) / 9;
    else if (y == 107)
        temp = x - KELVIN_NUMBER;

return(temp);
}
