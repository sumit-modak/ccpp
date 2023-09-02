#include<stdio.h>
#define n 5
int main(){
    int i, a[n], *pa;
    pa = a;                                      // &a[0]
    printf("Enter values in array : \n");
    for(i = 0; i < n; i++){
        printf("%d -> ", i);
        scanf("%d", &a[i]);                    // a + i 
    }
    printf("Value \t pointer \n");
    for(i = 0; i < n; i++)
        printf("%d \t %u \n", a[i], &a[i]);         // a + i, *(a + i)
    
    return 0;
}