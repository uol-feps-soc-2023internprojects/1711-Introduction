#include <stdio.h>

int main()
{
    int number1 = 123, number2 = 12;

    printf("Succesful cast of integer (%d) to character: %c\n", number1, number1);

    float output =  number1/number2;
    printf("Failed cast from float to integer: %f\n", output);
    
    output = number1/(float)number2;
    printf("Successful cast from float to integer: %f\n", output);
}