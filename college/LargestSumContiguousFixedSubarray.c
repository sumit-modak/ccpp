#define n 10
#include<stdio.h>
int bruteforce(int x[], int subcount){
    int answerindex = 0;
    int subsum = 0;
    for(int i = 0; i < n - subcount; i++){
        int sum = 0;
        for(int j = i; j <= i + subcount; j++)
            sum = sum + j;

        if(subsum < sum){
            answerindex = i;
            subsum = sum;
        }
    }
    return answerindex;
}
int largest_sum_subarray(int x[], int subcount){
    int answerindex = 0;
    int subsum = x[0];
    for(int i = 1; i < subcount; i++)
        subsum = subsum + i;

    for(int i = 1; i < n - subcount; i++){
        int sum = -x[i - 1] + subsum + x[i + subcount - 1];

        if(subsum < sum){
            answerindex = i;
            subsum = sum;
        }
    }
    return answerindex;
}
void main(){
    int x[n], subcount;
    printf("enter elements in the array : \n");
    for(int i = 0; i < n; i++)
        scanf("%d\n", &x[i]);

    printf("Enter length of sub array : ");
    scanf("%d\n", &subcount);

    printf("Sum of largest contiguous subarray : %d", x[largest_sum_subarray(x, subcount)]);
}
