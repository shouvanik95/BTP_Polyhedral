#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10][10][10];
	memset(a,0,10);
	#pragma scop
	for (int i = 1; i < 9; ++i)
	{
		for(int j = 1; j < 9; ++j) 
		{
			for(int k = 2; k < 9; ++k)
			{
				a[i][j][k]=a[i-1][j-1][k-2];
			}
		}
	}
	#pragma endscop
	return 0;
}