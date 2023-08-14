#include <stdio.h>

int main()
{
    int input1, input2;
    printf("Input 2 integers:");

    while( scanf(" %d %d", &input1, &input2) != 2)
    {
        printf("Invaild input, please retry:");
        
    }

    printf("You input %d and %d\n", input1,  input2);
}