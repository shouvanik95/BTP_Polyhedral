#include <stdio.h>

int main(int argc, char const *argv[])
{
	#pragma scop
	for(i=0;i<=30;i++)
		for(j=0;j<=30;j++) {
			a[i][j]=b[i][j]+c[i][j];
			c[i][j-1] = a[i][j+1];
		}
	#pragma endscop
	return 0;
}
