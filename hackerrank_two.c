#include <stdio.h>

int main(){

    //Pb5
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);
    arr[x] = v;

    for (int i =n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    

    // Pb4
     int n;
     scanf("%d", &n);
     int pos_neg_values[n];
     int sum_pos_value = 0;
     int sum_neg_value = 0;

    for (int i = 0; i < n; i++){
        scanf("%d", &pos_neg_values[i]);

        if(pos_neg_values[i] > 0){
            sum_pos_value += pos_neg_values[i];
        }else{
            sum_neg_value += pos_neg_values[i];
        }
    }

    printf("%d %d", sum_pos_value, sum_neg_value);

    // Pb3
     int n;
     scanf("%d", &n);
     int random_nums[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &random_nums[i]);
    }

    for (int i = n-1; i >= 0; i--){
        if(i%2 != 0){
            printf("%d ", random_nums[i]);
        }
    }

    // Pb2
     int n;
     scanf("%d", &n);

    if(n>0){
        for (int i = 1; i <= n; i++){
            printf("%d ", i);
        }
    }else{
        for (int i = n; i <= 0; i++){
            printf("%d ", i);
        }
    }

    // Pb1
     int n;
     scanf("%d", &n);

    int i = 1;
    while(i<=n){
        printf("%d. I Want More Assignments \n", i);
        i++;
    }

    return 0;
}
