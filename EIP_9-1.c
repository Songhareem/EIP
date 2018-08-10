
// 1+1+2+3+5+8+13+... 20번째 항까지의 합

int fibonacci(int n);

#include<stdio.h>

int main(){

	int i=0;
	int tmp=0;
	int result=0;

	for(i=0;i<21;i++) {
		result = fibonacci(i);
		printf("%d %d\n",i,result);
		tmp += result;
	}

	printf("%d\n",tmp);
}

int fibonacci(int n){

	if (n==0) return 0;
	else if(n==1) return 1;

	return fibonacci(n-1)+fibonacci(n-2);
}