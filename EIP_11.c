
// 입력 된 숫자 이하 자연수 내의 소수 합 

#include<stdio.h>

int main(){

	int i=2;
	int j=2;
	int input;
	int tmp=0;

	scanf("%d",&input);
	
	if(input<2) return 0;

	while(1){

		j=2;
		while((i % j) != 0) {
			
			j++;
		}

		if(i == j) {

			tmp += i;
			printf("%d %d\n",i, tmp);
		}

		if(i < input) {
			i++;
		} else {
			break;
		}
	}

	printf("%d\n",tmp);
}