#include <stdio.h>

int main(void)
{
    // store weight and height of students
    float students[3][2];
    
    for (int i = 0; i < 3; i++)
    {
        printf("Weight%d(kg): ", i);
        scanf("%f", &students[i][0]);
        printf("Height%d(m): ", i);
        scanf("%f", &students[i][1]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("BMI%d: %.2f\n", i, students[i][0]/ (students[i][1] * students[i][1]));
    }
}