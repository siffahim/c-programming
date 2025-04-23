#include <stdio.h>

int main(){
    char s[101];
    scanf("%s", &s);

    int len = 0;

    for (int i = 0; s[i] != '\0'; i++){
        len++;
    }

    //user strlen(s) function return value will be size of string

    printf("%d", len);
    return 0;
}