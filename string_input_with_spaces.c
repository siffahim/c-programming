#include <stdio.h>

int main(){
    char s[18];
    gets(s);
    //fgets(s, 18, stdin);
    printf("%s", s);
    return 0;
}