#include<stdio.h>

long positive_min(int x, long *r){
    for(int i=0; i<4; ++i)
        if(x > r[i] && r[i] > 0)    x = r[i];

    return x;
}
int main(){
    int x1, x2, a=0, b=0;
    scanf(" %d %d", &x1, &x2);

    long min = x1*a+x2*b;
    while(min>=0){
        long r[4];
        r[0] = x1*(a+1)+x2*b;
        r[1] = x1*(a-1)+x2*b;
        r[2] = x1*a+x2*(b+1);
        r[3] = x1*a+x2*(b-1);
        long rmin = positive_min(min, r);
        if(a!=0 && b!=0){
            if(r[0]==rmin)       a++;
            else if(r[1]==rmin)  a--;
            else if(r[2]==rmin)  b++;
            else if(r[3]==rmin)  b--;
            else               break;
        }
    }
    printf(" %d\n", min);

    return 0;
}
