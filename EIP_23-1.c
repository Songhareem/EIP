
// 배열에 입력된 다섯개의 숫자를 그레이코드 또는 이진수로 변환 
// 배열의 첫번째 비트가 0이면 이진수 -> 그레이코드
// 배열의 첫번째 비트가 1이면 그레이코드 -> 이진수

#include<stdio.h>

int main(){

	int i;
	int input[5], cont[4];

	scanf("%d %d %d %d %d",&input[0],&input[1],&input[2],&input[3],&input[4]);

	cont[0]=input[1];

	if(input[0] == 0) {

		for(i=1;i<4;i++) {

			cont[i] = input[i]^input[i+1];
		}

		printf("그레이코드 : ");
	}

	else if(input[0] == 1) {

		for(i=1;i<4;i++) {

			cont[i] = cont[i-1]^input[i+1];
		}

		printf("이진수 : ");
	}

	for(i=0;i<4;i++) printf("%d",cont[i]);
}