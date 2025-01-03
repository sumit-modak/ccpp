#include<stdio.h>

float table[1000][1001];
int n;

int main(){
	int i, j;
	/*
	n=5;
    table[0][0]=3;
    table[0][1]=16;
	table[1][0]=5;
    table[1][1]=20;
    table[2][0]=7;
    table[2][1]=24;
    table[3][0]=9;
    table[3][1]=38;
    table[4][0]=11;
    table[4][1]=50;
    //u=3.4;
    //result=18.01;
	*/
	scanf(" %d", &n);                                //input
	for(i=0; i<n; ++i)
		scanf(" %f %f", &table[i][0], &table[i][1]);

	for(j=2; j<n+1; ++j)		                     //difference table calculation
		for(i=j-1; i<n; ++i)
			table[i][j] = table[i][j-1] - table[i-1][j-1];

	for(i=0; i<n; ++i){			                     //printing difference table
		for(j=0; j<n+1; ++j)
			printf(" %f\t", table[i][j]);

		printf("\n");
	}
								                    //finding u
	float x;
	scanf(" %f", &x);
	float u=(x - table[0][n-1])/(table[1][0]-table[0][0]);
    printf("u : %f\n", u);
													//calculating function
    float coff=u, fact=1.0, result=table[n-1][1];
	for(i=1; i<n; ++i){
    	result+=(coff/fact)*table[n-1][i+1];

		coff*=u+i;
		fact*=i+1;
	}

	printf("Backward Interpolation : %f\n", result);
	return 0;
}