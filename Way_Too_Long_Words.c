#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int len, words;

    scanf("%d", &words);
    while (words--)
    {
        scanf("%s" , str);
        len = strlen(str);
        if (len <= 10)
        {
            printf("%s\n" , str);
        }
        else
            printf("%c%ld%c\n", str[0], strlen(str + 2), str[strlen(str) - 1]);
    }
    return 0;
}