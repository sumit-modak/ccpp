#include<stdio.h>
#include<string.h>

char substring(char s[], int start, int end){
	char ch[end - start + 1];
	int i = 0;
	while(i + start <= end){
		ch[i] = s[start + i];
		i++;
	}
	return ch;
}
void permute(char s[], char x[]){
    if(strlen(s) == 0){
        printf(" %s", x);
        return;
    }

    for(int i = 0; i < strlen(s); i++)
        return permute(strcat(substring(s, 0, i), substring(s, i + 1, strlen(s) - 1)), x + s[i]);
}
int main(){
    char sprime[] = "SPRIME";
    permute(sprime);
    return 0;
}