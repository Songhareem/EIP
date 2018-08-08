
// 1+2+3+ ... + 100

#include<stdio.h>

int main(){

	int i=0,tmp=0;

	for(i=1;i<=100;i++){

		tmp+=i;
	}

	printf("result : %d\n",tmp);

}