
// -1+2-4+7-11+16-22+... 20번째 항까지 합

#include<stdio.h>

int main(){

	int i=0;
	int j=1;
	int sign=1;
	int tmp=0;

	for(i=0;i<20;i++) {

		j += i;
		sign *= -1;
		tmp += (sign*j);

	}
	
	i=0;
	j=1;
	sign=1;
	tmp=0;

	do{

		j += i;
		sign *= -1;
		tmp += sign*j;
		
		i++;

	}while(i<20);

	printf("%d\n",tmp);
}