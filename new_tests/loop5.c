#include <stdio.h>

int main(int argc, char const *argv[])
{
	#pragma scop
	for(i=0;i<=10;i++)
		for(j=0;j<=10;j++) {
			a[i][j]=b[i+1][j];
			b[i][j]=a[i][j+1];
		}
	#pragma endscop
	return 0;
}
