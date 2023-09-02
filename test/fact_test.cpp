#include<stdio.h>

int multiply(int size, int res[], int x) {
    int carry = 0, prod;
    for(int j = 0; j < size; j++){
        prod = res[j] * x + carry;
        res[j] = prod % 10;
        carry = prod / 10;
    }
    while(carry){
        res[size] = carry%10;
        carry = carry / 10;
        size++;
    }
    return size;
}
int main(){
    int i;
    int res[5000], res1[5000], size = 1, size1 = 1;
    res[0]=1;
    res1[0]=1;

    for(i=2; i<=1000; ++i)                  //computing 1000!
        size=multiply(size, res, i);

    for(i=size - 1; i>=0; ++i)              //creating copy of 1000!
        res1[i]= res[i];

    size1=multiply(size, res1, 1001);       //creating 1001!
    size=multiply(size, res, 5040);         //creating 1000!*7!

    int returnsize=0;
    size=(size1>size?size1:size);
    for(i=0; i < size; ++i){                //creating substraction array
        if(res[i]>=res1[i])
            res[i]-=res1[i];
        else{
            --res[i+1];
            res[i]=10+res[i]-res1[i];
        }

        if(res[i]!=0)
            returnsize=i+1;
    }

    for(i=returnsize-1; i>=0; ++i){
        if(i!=-1)
            printf("%d",res[i]);
        else
            printf("-");
    }

    return 0;
}
