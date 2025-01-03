#include<stdio.h>

int main(){
    float x[10000], y[10000];
    float lb, ub, h, result = 0.0;
    int n;                          //number of sub intervals

    scanf(" %d", &n);
    scanf(" %f", &lb);
    scanf(" %f", &ub);
    h = (ub-lb)/(n);

    x[0] = lb;
    printf(" %f", x[0]);
    for(int i=1; i<=n; ++i){
        x[i] = x[i-1] + h;      // expression (varies)
        printf(" %f", x[i]);
    }
    printf("\n");

    for(int i=0; i<=n; ++i){
        y[i] = 1/(1 + x[i] * x[i]);
        printf(" %f", y[i]);

        if(i==0 || i==n)
            result+=y[i];
        else if(i&1)
            result+=4*y[i];
        else if(!(i&1))
            result+=2*y[i];
    }

    result*=(h/3);
    printf("\n %f\n", result);

    return 0;
}