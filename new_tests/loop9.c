#include <stdio.h>

int main(int argc, char const *argv[])
{
	#pragma scop
	for(i=0;i<=10;i++)
		a[i+1]=a[i]+5;
	#pragma endscop
	return 0;
}
