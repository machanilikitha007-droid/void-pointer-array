#include <stdio.h>

void displayArray(void *data, int size)
{
    int *numbers = (int *)data;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    displayArray(numbers, 5);

    return 0;
}
