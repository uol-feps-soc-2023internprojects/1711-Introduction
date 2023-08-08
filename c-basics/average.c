#include <stdio.h>
int main()
{
    int counter = 0;
    float input = 0, total = 0; 
    printf("This is a program to calculate the average of positive values.\n")
    printf("Once you have entered all your values enter a negative number to calculate the average.\n");
    while (input != -1)
    {
        printf("Enter value:");
        scanf("%f", &input);
        if (input < 0)
        {
            continue;
        }
        counter += 1;
        total += input;
    }
    printf("Average is %f\n", total/(float)counter);
}