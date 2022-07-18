#include <stdio.h>

int main(void)
{
    float weights[] = {40, 50, 60};

    printf("Avg: %.2f\n", (weights[0] + weights[1] + weights[2])/3);
}