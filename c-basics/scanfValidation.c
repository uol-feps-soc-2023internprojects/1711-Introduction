#include <stdio.h>

int main()
{
    int input1, readValues;
    char input2;
    char * input3;
    printf("Input an int, a char and a string.")
    readValues = scanf("%d %c %s", &input1, &input2, input3);
    printf("%d\n", readValues);
    return 0;
}