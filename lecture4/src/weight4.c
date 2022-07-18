#include <stdio.h>

int main(void)
{
    float weights[3];
    
    printf("Weight: ");
    scanf("%f", &weights[0]);
    printf("Weight: ");
    scanf("%f", &weights[1]);
    printf("Weight: ");
    scanf("%f", &weights[2]);

    printf("Avg: %.2f\n", (weights[0] + weights[1] + weights[2])/3);
}