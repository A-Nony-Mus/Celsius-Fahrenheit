/*A-Nony-Mus
 13 Feb. 2012
 this program converts between degrees celsius, faranheit, and kelvin based on user input
 18 Feb. 2012
 rewrote the if statements in the main loop to a switch statement, program now outputs corrects values,
 added a while statement to loop the process
 27 Feb. changed the values in the switch statement to characters instead of numbers
 10 Mar. 2012
 rewrote conversion function to use pointers and return all converted values with one call and the main function to reflect that*/

#include <stdio.h>
#define KELVIN_NUMBER 273.15

//function prototypes
void conversion(double x, char y, double *a, double *b, double *c);

int
main(void)
{
    
    char input;         //temperature unit
    
    double int_temp,    //initial input temperature
    celsius,            //this is where the converted celsius temperatue is stored
    fahrenheit,         //this is where the converted fahrenheit temperatue is stored
    kelvin,             //this is where the converted kelvin temperature is stored
    yesno;              //loop control variable

    yesno = 1;
while (yesno == 1){ 
    //gather the necessary input from the user
    printf("Please input the temperature you would like to convert followed by a space then the first letter of the scale it is in (ex: 107 c) ");
    scanf("%lf %c", &int_temp, &input);
    
    //convert the input and print the results
    conversion(int_temp, input, &celsius, &fahrenheit, &kelvin);
    if(input = 'c'
       || 'f'
       || 'k')
        printf("The converted temperatures are:\n in Celsius: %9.2f\n in Fahrenheit: %6.2f\n in Kelvin %11.2f\n", celsius, fahrenheit, kelvin);

    //loop?
    printf("would you like to continue (1=yes, 2=no)? ");
    scanf("%lf", &yesno);    
    }
    
    return(0);
}

/*Inputs: the input number and the character to determine whether it is faranheit or celsius
 Output: all converted temperatures as *a, *b, and *c*/
void conversion(double x, char y, double *a, double *b, double *c)
{
    switch (y) {
        case 'c':
            *a = x;
            *b = ((x * 9)/5)+32;
            *c = x + KELVIN_NUMBER;
            break;
        case 'f':
            *a = ((x - 32)*5)/9;
            *b = x;
            *c = *a + KELVIN_NUMBER;
            break;
        case 'k':
            *a = x - KELVIN_NUMBER;
            *b = ((*a * 9)/5)+32;
            *c = x;
            break;
        default:
            printf("I'm sorry, that was not one of the inputs\n");
            break;
    }
}
