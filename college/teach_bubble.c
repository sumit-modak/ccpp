#include<stdio.h>

int main(){
    int x[100000], n;
    printf("Enter length of the array :\n");
    scanf(" %d", &n);

    printf("Enter values in the array :\n");
    for(int i = 0; i < n; i++)
        scanf(" %d", &x[i]);

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(x[j] > x[j + 1]) {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    printf("Sorted array :\n");
    for(int i = 0; i < n; i++)
        printf(" %d", x[i]);

    return 0;
}
