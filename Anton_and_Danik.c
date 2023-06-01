#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check(char *s, char c)
{
    int count  = 0;
    for (int  i = 0; i < strlen(s); i++)
        if (s[i] == c)
            count++;
    return count;
}

int main(void)
{
    int n_games, i = 0;

    scanf("%d", &n_games);
    char outcome[n_games];
    scanf("%s", &outcome);
    if (check(outcome, 'A') >  check(outcome, 'D'))
        printf("Anton\n");
    else  if (check(outcome, 'A') <  check(outcome, 'D'))
        printf("Danik\n");
    else
        printf("Friendship\n");
    return (0);
}