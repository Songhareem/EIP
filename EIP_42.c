
// 행렬변환
// before		after
// 01 02 03     01 02 03 04 05
// 04 05 06		06 07 08 09 10   
// 07 08 09   	11 12 13 14 15
// 10 11 12   
// 13 14 15   

#include<stdio.h>

#define N 5
#define M 3

int main(){

	int A[N][M] = {0};
	int B[M][N] = {0};
	int var=1;
	int i,j;
	int al=0,ac=0; // A line A col
	int bl=0,bc=0; // B line B col
	
	for(i=0;i<5;i++) {

		for(j=0;j<3;j++) {

			A[i][j]=var;
			var++;
			printf("%02d ",A[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<15;i++) {

		if(ac>=3) {

			al++;
			ac=0;
		}

		if(bc>=5) {

			bl++;
			bc=0;
		}

		B[bl][bc] = A[al][ac];
		//printf("%d %d | %d %d\n",bl,bc,al,ac);
		ac++;
		bc++;
	}

	for(i=0;i<3;i++) {

		for(j=0;j<5;j++) {

			printf("%02d ",B[i][j]);
		}

		printf("\n");
	}
}