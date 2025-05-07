#include <stdio.h>

void fun(int* p){
    *p = 20;
}

int main() {
    int x = 10;
    fun(&x);
    int arr[5] = {10, 20, 30};
    int *p;
    p = arr + 3;
    *p = 5;
    printf("%p", arr);

    return 0;
}