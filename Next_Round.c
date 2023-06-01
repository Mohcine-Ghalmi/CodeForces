#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, n, i = 0, p = 0;
    int participants[100];

    scanf("%d %d", &n, &k);
    while (i < n)
        scanf("%d", &participants[i++]);
    i = 0;
    while (i < n)
    {
        if (participants[i] >= participants[k - 1] && participants[i] > 0)
            p++;
        i++;
    }
    printf("%d\n", p);
    return 0;
}