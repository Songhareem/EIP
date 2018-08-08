
// 1+3+5+...+99

#include<stdio.h>

int main(){

	int i=1;
	int tmp=0;

	while(i<100){

		tmp += i;
		i+=2;
	}

	printf("result : %d\n",tmp);

}