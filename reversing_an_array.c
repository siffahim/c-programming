#include <stdio.h>

int main(){
    // reversing an array by two pointer technique;
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int i = 0;
    int j = n-1;

    while(i<j){
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

        return 0;
}