#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// "A", "O", "Y", "E", "U", "I

int main()
{
    char tab[100];

    scanf("%s",tab);
    for (int i = 0;i < strlen(tab);i++)
    {
        if (isupper(tab[i]))
            tab[i] += 32;
        if (tab[i] != 'a' && tab[i] != 'o' && tab[i] != 'y'
        && tab[i] != 'e' && tab[i] != 'u' && tab[i] != 'i')
            printf(".%c",tab[i]);
    }
}