
// 1!+2!+3!+4!+5!+...+10!

#include<stdio.h>

int main(){

	int i=0;
	int j=1;
	int tmp=0;


	do{

		i++;
		j *= i;
		tmp += j;
		
	} while(i<10);
			
	printf("%d\n",tmp);
}