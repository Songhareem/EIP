
// 1-2+3-4+5-6+...+99

#include<stdio.h>

int main(){

	int i=1;
	int tmp=0;

	while(i<100){

		if(i%2 == 0) {
			tmp -= i;
		} else if (i%2==1) {
			tmp += i;
		}

		i++;
	}

	printf("result : %d\n",tmp);

}