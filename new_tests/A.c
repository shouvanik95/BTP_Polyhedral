#include <stdio.h>

int main(int argc, char const *argv[])
{
	#pragma scop
	for(i=0;i<=10;i++)
		for(j=0;j<=10;j++) {
			a[3*i+1][j+2*i]=2*i+5*j;
			c[i][j] = a[i+3][j+1];
		}
	#pragma endscop
	return 0;
}
