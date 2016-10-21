#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10][10];
	memset(a,0,10);
	#pragma scop
	for (int i = 1; i < 10; ++i)
	{
		for(int j = 0; j < 9; ++j) 
		{
			a[i][j]=a[i-1][j+1];
		}
	}
	#pragma endscop
	return 0;
}