#include <stdlib.h>
#include <assert.h> 
#include <stdio.h>

int main()
{
    int size;
    int * array;
    printf("Please enter the size of array to create:");
    scanf("%d", &size);

    array = (int *) malloc(sizeof(int) * size);
    int * array2 = malloc(sizeof(int) * 12);

    for( int i = 0; i < size; i ++)
    {
        array[i] = i * 7;
        printf("(%d)", array[i]);
    }


    printf("%d\n", array[7]);

    free(array);
    free(array);
}