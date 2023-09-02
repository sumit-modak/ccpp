#include<stdio.h>

int main(){
    char reply[3];
    printf("Do you have any problem in your life\n");
    scanf(" %s", reply);
    if((reply[0]=='Y' || reply[0]=='y')&& reply[1]=='e' && reply[2]=='s'){
        printf("Can you do something about it\n");
        scanf(" %s", reply);
    }
    printf("Then dont worry about it\n");
    return 0;
}
