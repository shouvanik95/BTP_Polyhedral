#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10][10];
	int b[10][10];

	#pragma scop

	for(int i=1; i<10; i++) {
		for(int j=0; j<10; j++){
			b[i][j]=a[i-1][j];
			a[i][j] = b[i][j];
		}
	}

	#pragma endscop

}