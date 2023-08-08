#include <stdio.h>
#include "tempConversion.h"

int main()
{
    float userTemp = 0;
    printf("Please enter a temperature in celsius. ");
    scanf("%f", &userTemp);
    printf("That is equivalent to %f fahrenheit.\n", celsiusToF(userTemp));
    return 0;
}