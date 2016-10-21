#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10];
	memset(a,0,10);
	#pragma scop
	for (int i = 0; i < 10; ++i)
	{
		a[i]=1;
	}
	#pragma endscop
	return 0;
}