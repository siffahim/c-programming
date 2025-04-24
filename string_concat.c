
#include <stdio.h>
#include <string.h>

int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int len_a = strlen(a);
    int len_b = strlen(b);

    for (int i = 0; i <= strlen(b); i++){
        a[i + len_a] = b[i];
    }

    // method strcat(a,b);f

    printf("%s %s", a, b);

    return 0;
} 