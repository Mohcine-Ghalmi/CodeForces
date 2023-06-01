#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lines, x = 0, i;
    char str[4];

    scanf("%d" , &lines);
    gets(str);
    while (lines--)
    {
        gets(str);
        i = 0;
        while (str[i])
        {
            if (str[i] == '+')
            {
                x++;
                break;
            }
            else if (str[i] == '-')
            {
                x--;
                break;
            }
            i++;
        }
    }
    printf("%d" , x);
}