#include <stdio.h>

int main(void)
{
    float weights[3];
    
    weights[0] = 40;
    weights[1] = 50;
    weights[2] = 60;

    printf("Avg: %.2f\n", (weights[0] + weights[1] + weights[2])/3);
}