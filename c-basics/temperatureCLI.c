#include <stdio.h>
#include <stdlib.h>

// Function to convert a temperature in celsius to Fahrenheit.
float celsiusToF(float inputTemp)
{
    return (inputTemp * 1.8f) +32;
}

int main(int argc, char * argv[])
{
    float input = atof(argv[1]);
    printf("%f celsius is equivalent to %f fahrenheit.\n", input, celsiusToF(input));
    return 0;
}