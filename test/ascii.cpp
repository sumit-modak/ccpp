#include<conio.h>
#include<io.h>
#include<fcntl.h>
#include<limits.h>

int main(void){
    int x = INT_MAX;
    _setmode(_fileno(stdout), _O_U16TEXT);
    for(int i = 0; i < x; ++i){
        wprintf(L" %c", (wchar_t)i);
    }
    getch();
    return 0;
}
