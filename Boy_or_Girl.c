#include <stdio.h>
#include <string.h>

int main()
{
    char tab[1000];

    scanf("%s",tab);
    for (int i = 0;i < strlen(tab); i++)
        for (int j = i;j < strlen(tab); j++)
                if (tab[i] > tab[j])
                {
                    char tmp = tab[i];
                    tab[i] = tab[j];
                    tab[j] = tmp;
                }
    long int j = 0;
    for (int i = 0 ;i < strlen(tab);i++)
        for (int k = i;k < strlen(tab);k++)
            if (tab[i] == tab[k])
                j++;

    if (j % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}