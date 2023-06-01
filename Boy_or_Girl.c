#include <stdio.h>
#include <string.h>

int main()
{
    char tab[1000];
    
    scanf("%s",tab);
    for (long int i = 0;i < strlen(tab); i++)
        for (long int j = i;j < strlen(tab); j++)
                if (tab[i] > tab[j])
                {
                    char tmp = tab[i];
                    tab[i] = tab[j];
                    tab[j] = tmp;
                }
    long int words = 0;
    for (long int i = 64 ;i < 123;i++)
        if (strrchr(tab,i))
            words++;
    if (words % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}