#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr_values[n+1];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr_values[i]);
    }

    int idx, v;
    scanf("%d %d", &idx, &v);

    for (int i = n; i >= idx + 1; i--){
        arr_values[i] = arr_values[i - 1];
    }

    arr_values[idx] = v;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr_values[i]);
    }
    

        return 0;
}