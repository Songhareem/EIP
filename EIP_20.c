
// 5의 배수의 개수와 합
// 1~100까지의 수 중 5의 배수의 개수와 합을 출력하라

#include<stdio.h>

int main(){

	int i;
	int cnt=0;
	int total=0;

	for(i=1;i<=100;i++) {

		if(i%5 == 0) {
			cnt++;
			total += i;
		}
	}

	printf("%d %d",cnt,total);
}