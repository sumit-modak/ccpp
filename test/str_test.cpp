#include<stdio.h>

const char* logx(){
    return "Hello World";
}

int main(){
    printf(logx());

    const char* name = "SPRIME";
    const wchar_t* name1 = L"SPRIME";
    const char16_t* name2 = u"SPRIME";
    const char32_t* name3 = U"SPRIME";
    printf("\n %d", sizeof(char));
    printf(" %d", sizeof(wchar_t));
    printf(" %d", sizeof(char16_t));
    printf(" %d\n", sizeof(char32_t));

    return 0;
}
