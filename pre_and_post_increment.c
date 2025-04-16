#include <stdio.h>

int main(){

    int x = 10;
    int y = x++;
    int z = ++y;
    printf("%d %d",x, y);

    return 0;
}