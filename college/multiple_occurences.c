#include<stdio.h>
#include<string.h>
#include<ctype.h>
//day2 q4
//Replacing multiple occurrences of characters by single character and printing in reverse order with change in case
int main(){
    char s[100], rev[100];
    scanf(" %s", s);
    int j=0,i;

    for(i=strlen(s)-1; i>=0; i--){
        if(s[i] != s[i+1]){
            if(s[i]>=65 && s[i]<=90){
                ++j;
                rev[j]=tolower(s[i]);
            }
            else if(s[i]>=97 && s[i]<=112){
                ++j;
                rev[j]=toupper(s[i]);
            }
        }
        printf(" %s\n", rev);
    }
    rev[j+1]='\0';
    printf(" %s", rev);
    return 0;
}
