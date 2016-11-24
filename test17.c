#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10][10];
	int b[10][10];

	#pragma scop

	for(int i=1; i<9; i++) {
		for(int j=1; j<9; j++){
			b[i][j]=a[i-1][j-1];
			a[i][j] = b[i][j];
			b[i][j] = b[i+1][j-1];
		}
	}

	#pragma endscop

}