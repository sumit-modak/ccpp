#include<windows.h>

int main(void) {
    MessageBoxW(
        NULL,
        L"Message",
        L"Title",
        MB_YESNOCANCEL | ICON_EXCLAMATION
    );
    return EXIT_SUCCESS;
}