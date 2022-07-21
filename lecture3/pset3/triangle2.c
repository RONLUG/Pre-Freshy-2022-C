#include <stdio.h>

int main(void)
{
    // Prompt user for size
    int size;
    printf("size: ");
    scanf("%d", &size);

    // Print the triangle
    for (int i = 0; i < size; i++)
    {
        for (int j = size; j > i; j--)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}