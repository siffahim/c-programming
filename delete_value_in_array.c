#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr_values[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr_values[i]);
    }

    int idx;
    scanf("%d", &idx);

    for (int i = idx; i < n-1; i++){
        arr_values[i] = arr_values[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr_values[i]);
    }
    

        return 0;
}