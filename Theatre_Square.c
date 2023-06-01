#include <stdio.h>

int main()
{
    int a, n, m;
    int x, y, sum;
    scanf("%d %d %d", &n, &m, &a);
    x = n / a;
    y = m / a;
    if (n % a != 0)
        x++;
    if (m % a != 0)
        y++;
    sum = x * y;
    printf("%d", sum);
    return 0;
}