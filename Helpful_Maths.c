#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char tab[100];
    int x = 0;

    scanf("%s",tab);
    for (int i = 0;i < strlen(tab); i++)
        if (tab[i] >= '0' && tab[i] <= '9')
            for (int j = i;j < strlen(tab); j++)
                if (tab[j] >= '0' && tab[j] <= '9')
                    if (tab[i] > tab[j])
                        {
                            char tmp = tab[i];
                            tab[i] = tab[j];
                            tab[j] = tmp;
                        }
    printf("%s",tab);
}