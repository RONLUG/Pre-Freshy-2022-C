#include <stdio.h>

int main(void)
{
    // Prompt user for a charge
    int cash;
    printf("cash: ");
    scanf("%d", &cash);

    // Initialize counter for each coin
    int n10 = 0;
    int n5 = 0;
    int n2 = 0;
    int n1 = 0;

    // Greedy algorithm
    while (cash >= 10)
    {
        n10++;
        cash -= 10;
    }

    while (cash >= 5)
    {
        n5++;
        cash -= 5;
    }

    while (cash >= 2)
    {
        n2++;
        cash -= 2;
    }

    while (cash >= 1)
    {
        n1++;
        cash -= 1;
    }

    // Print out answer
    printf("10: %d\n", n10);
    printf("5: %d\n", n5);
    printf("2: %d\n", n2);
    printf("1: %d\n", n1);
    printf("total: %d\n", n10 + n5 + n2 + n1);

    return 0;
}
