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
    else if (x < y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }

    return 0;
}