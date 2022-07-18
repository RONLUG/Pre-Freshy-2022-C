#include <stdio.h>

int main(void)
{
    float weights[3];
    
    for (int i = 0; i < 3; i++)
    {
        printf("Weight%d: ", i);
        scanf("%f", &weights[i]);
    }
    
    printf("Avg: %.2f\n", (weights[0] + weights[1] + weights[2])/3);
}