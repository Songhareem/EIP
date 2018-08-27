
// 오른쪽에 빈 삼각형 만들기
// 01 02 03 04 05
// 06 07 08 09 00
// 10 11 12 00 00
// 13 14 15 16 00
// 17 18 19 20 21

#include<stdio.h>

int main(){

	int i,j;
	int ep;
	int mid=5;
	int var;
	int arr[5][5] = {0};

	ep=4;
	var=1;
	mid = mid/2; // 배열의 중간 값

	for(i=0;i<5;i++) {

		for(j=0;j<=ep;j++) {

			arr[i][j] = var;
			var++;
		}

		if(i<mid) {

			ep--;
		} else {

			ep++;
		}
		
	}

	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {
			
			printf("%02d ",arr[i][j]);
		}

		printf("\n");
	}	
}