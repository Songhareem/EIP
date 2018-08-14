
// 10진수 n을 2진수 변환 (0<n<1001)

#include<stdio.h>

int main(){

	int bin[10] = {0,0,0,0,0,0,0,0,0,0};
	int i=0;
	int n;

	scanf("%d",&n);

	while(1){

		if(n==0) break;
		if(n==1) { 
			bin[i]=n;
			break;
		}

		bin[i] = n%2;
		i++;

		n = n/2;
	}

	while(i!=-1) {

		printf("%d",bin[i]);
		i--;
	}
}