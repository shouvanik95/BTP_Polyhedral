#include <stdio.h>

int main(int argc, char const *argv[])
{
	#pragma scop
	for(i=0;i<=10;i++) {
		a[i+2]=b[i]+5;
		b[i+3]=a[i]+10;
	}
	#pragma endscop
	return 0;
}
