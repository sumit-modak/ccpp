#include<stdio.h>

int input_sort(int z[]){
    int n;
    scanf(" %d", &n);
    if(n>0){
        scanf(" %d", &z[0]);
        for(int i=1; i<n; ++i){
            scanf(" %d", &z[i]);

            int j=i-1, key = z[i];
            while(j>=0 && z[j] > key){
                z[j+1] = z[j];
                --j;
            }
            z[j] = key;
        }
    }
    return n;
}
void display(int z[], int n){
    for(int i=0; i<n; ++i)
        printf(" %d", z[i]);

    printf("\n");
}
int main(){
    int x[100], n;
    n = input_sort(x);

    display(x, n);
    return 0;
}
