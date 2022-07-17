#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    if (num % 3 == 0)
    {
        printf("fizz\n");
    }
    else if (num % 5 == 0)
    {
        printf("buzz\n");
    }
    else if (num % 3 == 0 && num % 5 == 0)
    {
        printf("fizzbuzz\n");
    }
    else
    {
        printf("%d\n", num);
    }

    return 0;
}