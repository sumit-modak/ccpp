#include<stdio.h>

float nfi[1000][1001];
int n;

int main(){
	int i, j;

    //n=5;
    //nfi[0][0]=3;
    //nfi[0][1]=16;
	//nfi[1][0]=5;
    //nfi[1][1]=20;
    //nfi[2][0]=7;
    //nfi[2][1]=24;
    //nfi[3][0]=9;
    //nfi[3][1]=38;
    //nfi[4][0]=11;
    //nfi[4][1]=50;
    //u=3.4;
    //result=18.01;

	scanf(" %d", &n);                                //input
	for(i=0; i<n; ++i)
		scanf(" %f %f", &nfi[i][0], &nfi[i][1]);

	for(j=2; j<n+1; ++j)		                     //difference table calculation
		for(i=0; i<n-j+1; ++i)
			nfi[i][j] = nfi[i+1][j-1] - nfi[i][j-1];

	for(i=0; i<n; ++i) {		                     //printing difference table
		for(j=0; j<n+1; ++j)
			printf(" %f\t", nfi[i][j]);

		printf("\n");
	}
								                    //finding u
	float x;
	scanf(" %f", &x);
	float u=(x - nfi[0][0])/(nfi[1][0]-nfi[0][0]);
    printf("u : %f\n", u);
													//calculating function
    float coff=u, fact=1.0, result=nfi[0][1];
	for(i=1; i<n; ++i){
    	result+=(coff/fact)*nfi[0][i+1];

		coff*=u-i;
		fact*=i+1;
	}

	printf("result : %f", result);
	return 0;
}