#include <stdio.h>

int main(void)
{
    // Prompt user for num
    int num;
    printf("num: ");
    scanf("%d", &num);

    // Store maximum digit value
    int maxDigit;

    int divider = 1;

    // Compare every digit
    while (num % divider != num)
    {
        // Calculate value of current digit ========
        // Remove larger digit
        int digit = num % (divider * 10);
        // Remove smaller digit
        digit /= divider;

        // Compare current digit value to the maximum calculated digit ==========
        if (digit > maxDigit)
        {
            maxDigit = digit;
        }

        // Move to next digit =========
        divider *= 10;
    }

    // Print out answer
    printf("%d", maxDigit);

    return 0;
}
