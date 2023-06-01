#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Petya, Vasya, Tonya, lines;
    int sum = 0;

    scanf("%d", &lines);
    while (lines--)
    {
        scanf("%d %d %d", &Petya, &Vasya, &Tonya);
        if (Petya + Vasya + Tonya >= 2)
            sum++;
    }
    printf("%d", sum);
    return 0;
}