
// 정수입력 받아 해당 정수의 약수들 출력하기 

#include<stdio.h>

int main(){

	int a;
	int i=1;

	scanf("%d",&a);

	while(i<=a) {

		if(a%i == 0) printf("%d\n",i);

		i++;
	}
	
}


