#include <stdio.h> 

int main() {
    int x = 10;

    printf("%d\n", x);
    printf("%p\n", &x);

    //declare pointer variable
    int* ptr;
    ptr = &x;
    // printf("%p\n", ptr);
    // printf("%d\n", *ptr);
    *ptr = 100;
    printf("%d", x);

    return 0;
}