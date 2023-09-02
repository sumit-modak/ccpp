#include<stdio.h>

int main(){
    int x[100000], n;
    scanf(" %d", &n);
    for(int i=0; i<n; ++i)
        scanf(" %d", &x[i]);

    int sum=0, twicesum=0;
    for(int i=0; i<n; ++i){
        sum+=x[i];
        twicesum+=x[i];
        twicesum*=2;
    }
    printf(" %d - %d : %d", twicesum, sum, twicesum-sum);
    return 0;
}
