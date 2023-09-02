#include<stdio.h>
#include<ctype.h>

float freq[27] = {0.0, 7.52, 1.4, 3.13, 3.55, 11.58, 2.23, 1.75, 4.71, 7.08, 0.16, 0.52, 3.82,
                  2.38, 6.74, 7.07, 2.00, 0.11, 5.86, 6.15, 8.57, 2.55, 0.99, 1.55, 0.22, 1.55, 0.09};
//extra zero is taken at the staring to avoid punctuations
void print(char layout[3][10]){
    for(int i = 0; i < 10; ++i){
        float sum = freq[layout[0][i]-64] + freq[layout[1][i]-64] + freq[layout[2][i]-64];
        printf(" %f", sum);
    }
    printf("\n");
}
int main(){
    printf("ENGRAM : \n");
    char engram[3][10] = {'B', 'Y', 'O', 'U', '@', '@', 'L', 'D', 'W', 'V',
                          'C', 'I', 'E', 'A', '@', '@', 'H', 'T', 'S', 'N',
                          'G', 'X', 'J', 'K', '@', '@', 'R', 'M', 'F', 'P'};
    print(engram);

    printf("HALMAK 2: \n");
    char halmak2[3][10] = {'V', 'L', 'R', 'P', 'Z', '@', 'G', 'U', 'D', 'Q',
                          'H', 'S', 'N', 'T', '@', '@', 'A', 'E', 'O', 'I',
                          'M', 'F', 'C', 'W', '@', 'K', 'Y', 'X', 'B', 'J'};
    print(halmak2);

    printf("HALMAK : \n");
    char halmak[3][10] = {'W', 'L', 'R', 'B', 'Z', '@', 'Q', 'U', 'D', 'J',
                          'S', 'H', 'N', 'T', '@', '@', 'A', 'E', 'O', 'I',
                          'F', 'M', 'V', 'C', '@', 'G', 'P', 'X', 'K', 'Y'};
    print(halmak);

    return 0;
}
/*
B   Y   O   U           L   D   W   V    Z
C   I   E   A           H   T   S   N    Q
G   X   J   K           R   M   F   P

53   59   272   97          145   136   60    38    3
119  270  445   287         180   331   232   258   4
67   8    6     19          224   90    86    76
*/
