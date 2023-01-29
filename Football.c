#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s1[100];
    int condition = 1;

    scanf("%s", s1);
    for (int i = 1; i <= strlen(s1); i++) {
        if (s1[i] == s1[i - 1]) {
            condition++;
            if (condition == 7) {
                printf("YES\n");
                return 0;
            }
        } 
        else
            condition = 1;
    }
    printf("NO\n");
    return 0;
}