#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10][10];
	memset(a,0,10);
	#pragma scop
	for (int i = 0; i < 10; ++i)
	{
		for(int j=2; j < 10; ++j) 
		{
			a[i][j]=a[i][j-2];
		}
	}
	#pragma endscop
	return 0;
}