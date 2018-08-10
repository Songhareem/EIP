
// 1+1+2+3+5+8+13+... 20번째 항까지의 합

#include<stdio.h>

int main(){

	int i=0;
	int a1=0;
	int a2=1;
	int sum=1;
	int tmp=2;

	do{

		a1 = a2;
		a2 = sum;
		sum = a1+a2;

		//printf("%d\n",sum);

		tmp += sum;

		i++;

	}while(i<18);

	printf("%d\n",tmp);
}