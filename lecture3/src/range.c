#include <stdio.h>

int main(void)
{
    int num;
    while (1)
    {
        printf("Enter single digit number: ");
        scanf("%d", &num);
        if (num >= 0 && num <= 9)
        {
            break;
        }
    }

    printf("%d\n", num);

    return 0;
}