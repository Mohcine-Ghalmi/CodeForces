#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tab[5][5],x,y;

    for (int i = 0;i < 5;i++)
    {
        for (int j = 0;j < 5;j++)
        {
            scanf("%d",&tab[i][j]);
            if (tab[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    printf("%d",abs(x - 2) + abs(y - 2));
    return 0;
}