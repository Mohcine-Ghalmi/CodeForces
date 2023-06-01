#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int x,steps;

    scanf("%d", &x);
    steps = x / 5;
    if (x % 5 != 0)
        steps++;
    printf("%d",steps);
}