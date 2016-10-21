#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10][10];
	memset(a,0,10);
	#pragma scop
	for (int i = 2; i < 10; ++i)
	{
		for(int j = 0; j < 10; ++j) 
		{
			a[i][j]=a[i-2][j];
		}
	}
	#pragma endscop
	return 0;
}