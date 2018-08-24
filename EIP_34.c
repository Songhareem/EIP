
// ㄹ자로 값넣기
// 01 02 03 04 05
// 10 09 08 07 06
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25

#include<stdio.h>

int main(){

	int i,j;
	int k,l,m,n,p;
	int arr[5][5] = {0};

	k=0;
	l=0;
	m=4;
	n=1;

	for(i=0;i<5;i++) {

		for(j=l;j!=m+n;j+=n) {

			k++;
			arr[i][j] = k;
		}

		p=l;
		l=m;
		m=p;
		n *= -1;
	}
	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {
			
			printf("%02d ",arr[i][j]);
		}

		printf("\n");
	}	
}