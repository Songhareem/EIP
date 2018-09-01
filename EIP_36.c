
// 모래시계 값넣기
// 01 02 03 04 05
// 00 06 07 08 00
// 00 00 09 00 00
// 00 10 11 12 00
// 13 14 15 16 17

#include<stdio.h>

int main(){

	int i,j;
	int sp,ep;
	int var;
	int arr[5][5] = {0};

	sp=0;
	ep=4;
	var=1;

	for(i=0;i<5;i++) {

		for(j=sp;j<=ep;j++) {

			arr[i][j] = var;
			var++;
		}

		if(i<2) {

			sp++;
			ep--;
		} else {

			sp--;
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