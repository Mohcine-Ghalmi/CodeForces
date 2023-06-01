#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char word[1000];
    int up = 0,lower = 0;
    scanf("%s",word);

    for (int i = 0;i < strlen(word);i++)
    {
        if (islower(word[i]))
            lower++;
        else if (isupper(word[i]))
            up++;
    }
    if (up > lower)
        for (int i = 0;i < strlen(word);i++)
            printf("%c",toupper(word[i]));
    else
        for (int i = 0;i < strlen(word);i++)
            printf("%c",tolower(word[i]));

    return 0;
}