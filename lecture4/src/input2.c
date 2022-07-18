#include <stdio.h>

int main(void)
{
    char s[10];
    fgets(s, 10, stdin);
    printf("%s", s);
}