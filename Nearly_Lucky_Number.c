#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    long long int nbr;

    scanf("%lld", &nbr);
    if (nbr % 7 == 0 || nbr % 4 == 0)
    {
        printf("NO");
        return 0;
    }
    while(nbr)
    {
        if (nbr % 10 == 4 || nbr % 10 == 7)
            nbr = nbr / 10;
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}