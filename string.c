// null concept
// input with fgets, gets, scanf;
//fgets(s, 20, stdin);
#include <stdio.h>

int main(){
    char s[10];
    scanf("%s", &s);

    printf("%c\n", s[2]);
    printf("%s\n", s);

    printf("%d", s[5]);

    return 0;
}