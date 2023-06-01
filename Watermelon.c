#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);
    if (x == 2)
    {
        printf("NO");
        return 0;
    }

    if (x >= 1 && x <= 100)
    {
        if (x % 2 == 0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}