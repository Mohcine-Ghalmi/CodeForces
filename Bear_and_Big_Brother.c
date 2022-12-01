#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int Lw, Bw, Bear = 0;

    scanf("%d %d", &Lw, &Bw);
    if (Lw > Bw)
        Bear = 0;
    else
        while (Lw <= Bw)
        {
            Lw = Lw * 3;
            Bw = Bw * 2;
            Bear++;
        }
    printf("%d",Bear);
    return 0;
}