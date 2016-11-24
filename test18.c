#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10][10];
	int b[10][10];
	int c[10][10];

	#pragma scop

	for(int i=0; i<10; i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				c[i][j]+=a[i][k]+b[k][j];
			}
		}
	}

	#pragma endscop

}