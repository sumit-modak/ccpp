#include<stdio.h>

int main(){
    unsigned long res[20], fact=1, xfact=4;
    int i, j;
    //scanf(" %", xfact);
    res[0]=xfact;

    for(i=1; i<10; ++i){
        fact*=i;
        res[i]=fact;
    }

    for(i=1; i<14; ++i){
        xfact*=res[i];
        for(j=0; j<14; ++j){
            if(res[j]>xfact){
                printf("%d! < %dx%d! < %d!\n", j-1, res[0], i, j);
                break;
            }
        }
        xfact=res[0];
    }
    return 0;
}
