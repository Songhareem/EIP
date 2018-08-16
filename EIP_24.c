
// 배열(5) + 배열(5) 에 들어간 이진수 더하기
// 자리수가 넘어가면 overflow 출력

#include<stdio.h>

int main(){

	int i;

	int A[5] = {1,0,1,1,0};
	int B[5] = {0,0,1,1,1};
	int out[5];

	for(i=0;i<5;i++) out[i] = A[i] + B[i];
	
	for(i=4;i>0;i--) {

		if(out[i] > 1) { 
			out[i-1] += 1;
			out[i] -= 2;
		}
	}

	if(out[0] > 1) printf("OVERFLOW\n");

	else {
		
		for(i=0;i<5;i++) printf("%d",out[i]);
	}
}