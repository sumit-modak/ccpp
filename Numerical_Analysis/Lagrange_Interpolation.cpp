#include<stdio.h>

float x[1000], y[1000], xi, result=0.0;
int n;
int main(){
    scanf(" %d", &n);
    for(int i=0; i<n; ++i)
        scanf(" %f %f", &x[i], &y[i]);
    scanf(" %f", &xi);

    for(int i=0; i<n; ++i){
        float temp=y[i];
        for(int j=0; j<n; ++j)
            if(i!=j)
                temp*=(xi-x[j])/(x[i]-x[j]);

        result+=temp;
    }
    printf(" %f\n", result);
    return 0;
}