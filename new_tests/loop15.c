#include <stdio.h>

int main(int argc, char const *argv[])
{
	#pragma scop
	for(i=1;i<11;i++)
		for(j=1;j<11;j++)
		{
			a[i+3][j+3]=b[i][j];
			b[2*i+2][4*j-3]=a[i][j];
		}
	#pragma endscop
	return 0;
}
