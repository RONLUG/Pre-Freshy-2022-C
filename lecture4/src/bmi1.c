#include <stdio.h>

int main(void)
{
    float weights[3];
    float heights[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Weight%d: ", i);
        scanf("%f", &weights[i]);
        printf("Height%d: ", i);
        scanf("%f", &heights[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("BMI%d: %.2f\n", i, weights[i]/ (heights[i] * heights[i]));
    }
}