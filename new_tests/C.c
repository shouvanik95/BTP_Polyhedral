#include <stdio.h>

int main(int argc, char const *argv[])
{
	#pragma scop
	for(i=0;i<=10;i++)
		for(j=0;j<=10;j++) {
			a[j+4][j+1] = b[i][j];
			b[i][j] = a[i+2*j+1][i+j+3];
		}
	#pragma endscop
	return 0;
}
