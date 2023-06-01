#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lower(char *tab)
{
    for (int i = 0; i < strlen(tab); i++)
        if (tab[i] >= 'A' && tab[i] <= 'Z')
            tab[i] += 32;
}

int main()
{
    char A[256];
    char B[256];
    int i = 0,x = 0;

    scanf("%s %s",A,B);
    lower(A);
    lower(B);
    while (A[i])
    {
        if (A[i] > B[i])
        {
            printf("1");
            return 0;
        }
        else if (A[i] < B[i])
        {
            printf("-1");
            return 0;
        }
        i++;
    }
    printf("0");
    return 0;
}