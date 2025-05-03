#include <stdio.h> 

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);

    int is_equal = 0;

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x){
                is_equal = 1;
                printf("%d %d\n", arr[i], arr[j]);
                break;
            }
        }
    }

    if(is_equal){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
} 