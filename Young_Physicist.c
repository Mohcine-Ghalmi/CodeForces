#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// body is in equilibrium,
int main()
{
    int xsum = 0, ysum = 0, zsum = 0;
    int n;

    scanf("%d",&n);
    for (int i = 0; i < n;i++)
    {
        int x = 0, y = 0, z = 0;
        scanf("%d %d %d",&x, &y, &z);
        xsum += x;
        ysum += y;
        zsum += z;
    }
    printf("%s",(xsum == 0 && ysum == 0 && zsum == 0)?"YES":"NO");
}