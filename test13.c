#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10];
	int b[10];

	#pragma scop

	for(int i=1; i<10; i++) {
		b[i]=a[i-1]*2;
		a[i]=b[i];
	}

	#pragma endscop

}