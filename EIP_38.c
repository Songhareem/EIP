
// 열의 크기에 따른 이등변 삼각형 만들기
// 열만 주어짐
// 00 00 00 10
// 00 00 05 11
// 00 02 06 12
// 01 03 07 13
// 00 04 08 14
// 00 00 09 15
// 00 00 00 16


#include<stdio.h>

int main(){

	int i,j;
	int var;
	int sp,ep;
	int col = 4;
	int line = (col*2)-1;
	int arr[line][col];

	sp = ep = line/2;
	var = 1;

	for(i=0;i<line;i++) {

		for(j=0;j<col;j++) {

			arr[i][j] = 0;			
			printf("%02d ",arr[i][j]);
		}

		printf("\n");
	}

	printf("\n\n");

	for(i=0;i<col;i++) {

		for(j=sp;j<=ep;j++) {

			arr[j][i] = var;
			var++;
		}

		sp--;
		ep++;
	}

	for(i=0;i<line;i++) {

		for(j=0;j<col;j++) {

			printf("%02d ",arr[i][j]);
		}

		printf("\n");
	}
}