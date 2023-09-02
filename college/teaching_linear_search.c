#include<stdio.h>

int main(){
    int x[100000], n, find, i;

    printf("enter length of array : \n");
    scanf(" %d", &n);
    printf("enter elements in the array\n");
    for(i = 0; i < n; i++)
        scanf(" %d", &x[i]);

    printf(" enter the element to find\n");
    scanf(" %d", &find);

    for(i=0; i< n; ++i){
        if(x[i]==find){
            printf("index of %d : %d", find, i);
            break;
        }
        else if(i == n-1){
            printf(" element not found");
        }
    }

    return 0;
}
