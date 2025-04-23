// null concept
// input with fgets, gets, scanf;
//fgets(s, 20, stdin);
#include <stdio.h>

int main(){
    char s[10];
    scanf("%c", &s);

    printf("%c\n", s);
    printf("%s\n", s);

    printf("%d", s[5]);

    return 0;
}