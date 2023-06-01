#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    int stones;
    char color[100];

    scanf("%d",&n);
    stones = 0;
    scanf("%s",color);
    for (int i = 0; i < n; i++)
        if (color[i] == color[i + 1])
            stones++;
    printf("%d",stones);
    return 0;
}