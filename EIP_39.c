
// 배열 90도 회전
// before			after
// 11 12 13 14 15   00 00 00 00 11
// 00 07 08 09 10   00 00 00 07 12
// 00 00 04 05 06   00 00 04 08 13
// 00 00 00 02 03   00 02 05 09 14
// 00 00 00 00 01   01 03 06 10 15

#include<stdio.h>

#define MAX 4;

int main(){

	int i,j;
	int var;
	int col,line;
	int arr[5][5] = {{11,12,13,14,15},
					 {0,7,8,9,10},
					 {0,0,4,5,6},
					 {0,0,0,2,3},
					 {0,0,0,0,1}};

	int tmp[5][5] = { 0 };

	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {

			printf("%02d ",arr[i][j]);
		}

		printf("\n");
	}

	printf("\n\n");

	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {

			line = j;
			col = i-MAX;
			if(col<0) col *= -1;
			tmp[line][col] = arr[i][j];
		}
	}

	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {

			printf("%02d ",tmp[i][j]);
		}

		printf("\n");
	}
}