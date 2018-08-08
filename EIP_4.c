
// -(1/2)+(2/3)-(4/5)+...-(99/100)

#include<stdio.h>

int main(){

	float i=1;
	float tmp=0;

	while(i<100){

		if((int)i%2==1) {
			tmp -= i/(i+1);
		} else if((int)i%2==0) {
			tmp += i/(i+1);
		}
		i++;
	}

	printf("result : %f\n",tmp);
}