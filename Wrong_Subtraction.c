#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long int nbr,n;

    scanf("%lld %lld",&nbr, &n);
    for (int i = 0;i < n;i++)
    {
        if (nbr % 10 != 0)
            nbr--;
        else if (nbr % 10 == 0)
            nbr = nbr / 10;
    }
    printf("%lld",nbr);
}