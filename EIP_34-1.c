
// ㄹ자로 값넣기
// 01 02 03 04 05
// 10 09 08 07 06
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25

#include<stdio.h>

int main(){

	int i,j;
	int sp,ep;
	int tmp;
	int n;
	int var;
	int arr[5][5] = {0};

	sp=0;
	ep=5;
	n=1;
	var=1;

	for(i=0;i<5;i++) {

		for(j=sp;j!=ep;j+=n) {

			arr[i][j] = var;
			var++;
		}

		n *= -1;
		tmp = sp;
		sp = ep;
		ep = tmp;
		sp += n;
		ep += n;

	}
	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {
			
			printf("%02d ",arr[i][j]);
		}

		printf("\n");
	}	
}