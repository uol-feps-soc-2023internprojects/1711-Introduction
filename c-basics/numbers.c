#include <stdio.h>
int main()
{
    int num = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);
    if (num > 10)
    {
        printf("Your number is greater than ten.\n");
    }
    else if (num < 0)
    {
        printf ("Your number is less than 0\n");
    }
    else
    {
        printf ("Your number is between 0 and 10 (inclusive)\n");
    }
    return 0;
}