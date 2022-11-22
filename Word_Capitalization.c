#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char tab[1000];

    scanf("%s",tab);
    if (islower(tab[0]))
        tab[0] -= 32;
    printf("%s",tab);
}