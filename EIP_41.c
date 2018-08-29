
// 대각선 배열 채우기
// 01 02 04 07 11   
// 03 05 08 12 16   
// 06 09 13 17 20   
// 10 14 18 21 23   
// 15 19 22 24 25   

#include<stdio.h>

#define N 5

int main(){

	int arr[N][N] = {0};
	int i=0;
	int j;
	int limit=N*2-1;
	int line=0;
	int col;
	int var=1;

	for(i=0;i<limit;i++) {

		for(line=0;line<N;line++) {

			col=i-line;
			if(col>=0 && col<N) {

				arr[line][col] = var;
				var++;
			}
		}
	}

	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {

			printf("%02d ",arr[i][j]);
		}

		printf("\n");
	}
}