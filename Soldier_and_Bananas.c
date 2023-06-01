#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //k  the cost of the first banana
    //n initial number of dollars the soldier has
    // wnumber of bananas he wants.
    int k, n, w;
    int sum = 0,banan = 0;

    scanf("%d %d %d",&k ,&n ,&w);
    while (w > 0)
        sum += k * w--;
    //how much he gonna borrow 
    printf("%d",((sum - n) > 0)?(sum - n):0);
}