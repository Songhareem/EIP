
// 아래 배열 만들기
// 행고정 열변화
// 01 06 11 16 21
// 02 07 12 17 22 
// 03 08 13 18 23
// 04 09 14 19 24
// 05 10 15 20 25

#include<stdio.h>

int main(){

	int i,j;
	int n=1;
	int arr[5][5];

	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {

			arr[j][i] = n;
			n++;
		}
	}

	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {
			
			printf("%02d ",arr[i][j]);
		}

		printf("\n");
	}	
}