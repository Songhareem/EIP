
// 배열A[99] = 2~100 , 소수의 갯수 

#include<stdio.h>

int main(){

	int A[99];
	int cnt;
	int i=2;
	int j;
	int tmp=0;

	for(cnt=0;cnt<99;cnt++) {

		A[cnt] = cnt+2;

		//printf("%d\n",A[cnt]);
	}

	cnt=0;
	while(1) {

		i=2;

		if(cnt>98) break;

		while(A[cnt] % i != 0) i++;

		if(A[cnt] == i) {

			tmp++;

			printf("%d\n",i);
		}

		cnt++;
	}

	printf("%d\n",tmp);
}