
// 1+3+6+10+15+21+... 20번째 항까지 합산

#include<stdio.h>

int main(){

	int i=0;
	int j=0;
	int tmp=0;

	for(i=1;i<=20;i++){

		j += i;
		tmp += j;
	}

	printf("%d\n",tmp);
}