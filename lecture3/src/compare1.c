#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("what is x? ");
    scanf("%d", &x);
    printf("what is y? ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("x is greater than y\n");
    }

    if (x < y)
    {
        printf("x is less than y\n");
    }

    if (x == y)
    {
        printf("x is equal to zero\n");
    }

    return 0;
}