
// 달팽이 배열 만들기
// 01 02 03 04 05   
// 16 17 18 19 06   
// 15 24 25 20 07   
// 14 23 22 21 08   
// 13 12 11 10 09   

#include<stdio.h>

int main(){

	int var;
	int cnt;
	int i,j;
	int max;
	int n;
	int arr[5][5] = {0};

	var=0;
	n=1;
	i=0;
	j=-1;
	max=5;

	while(1){

		for(cnt=0;cnt<max;cnt++){

			var++;
			j+=n;
			arr[i][j]=var;
		}

		max--;
		if(max<0) 
			break;

		for(cnt=0;cnt<max;cnt++){

			var++;
			i+=n;
			arr[i][j]=var;
		}

		n*=-1;
	}
	
	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {

			printf("%02d ",arr[i][j]);
		}

		printf("\n");
	}
}