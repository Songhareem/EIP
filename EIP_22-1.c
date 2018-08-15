
// 1의 보수, 2의 보수 구하기
// 배열 이용

#include<stdio.h>

int main(){

	int a[5] = {1,0,1,0,1};

	for(int i=0; i<5; i++) {

		a[i] += 1;
		a[i] = a[i]%2; 
	}

	for(int i=0; i<5; i++) printf("%d",a[i]);
}