#include <stdio.h>

// Function to convert a temperature in celsius to Fahrenheit.
float celsiusToF(float inputTemp)
{
    return (inputTemp * 1.8f) +32;
}

int main()
{
    float userTemp = 0;
    printf("Please enter a temperature in celsius. ");
    scanf("%f", &userTemp);
    printf("That is equivalent to %f fahrenheit.\n", celsiusToF(userTemp));
    return 0;
}