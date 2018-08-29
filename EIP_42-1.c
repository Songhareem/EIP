
// 행렬변환
// before		after
// 01 02 03     01 02 03 04 05
// 04 05 06		06 07 08 09 10   
// 07 08 09   	11 12 13 14 15
// 10 11 12   
// 13 14 15   

#include<stdio.h>

int main(){

	int A[5][3] = {0};
	int B[3][5] = {0};
	int i;
	int j;
	int var=1;
	int *pa=&A[0][0];
	int *pb=&B[0][0];

	for(i=0;i<5;i++) {

		for(j=0;j<3;j++) {

			A[i][j]=var;
			var++;
			printf("%02d ",A[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<15;i++) {
		
		*pb=*pa;
		pb++;
		pa++;
	}

	for(i=0;i<3;i++) {

		for(j=0;j<5;j++) {

			printf("%02d ",B[i][j]);
		}

		printf("\n");
	}
}