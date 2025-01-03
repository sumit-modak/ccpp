#include<stdio.h>

float expression(float x){
    float fx = 1 / (1 + x*x);
    return fx;
}
int main(){
    float lb, ub, h, result = 0.0;
    int n;                          //number of intervals

    scanf(" %d", &n);
    scanf(" %f", &lb);
    scanf(" %f", &ub);
    h = (ub-lb)/n;

    float x = lb, y;
    for(int i=0; i<=n; ++i){
        y = expression(x);
        // printf(" %f", y);
        if(i!=0 || i!=n)
            result += y;
        else
            result += y/2;

        x += h;
    }
    printf("\n");
    result *= h;
    printf(" %f\n", result);
    return 0;
