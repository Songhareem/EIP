
// 소수판별

#include<stdio.h>

int main(){

	int i;
	int cnt=0;
	int input;

	scanf("%d",&input);
	
	for(i=1;i<=input && cnt<3;i++){

		if((input%i) == 0) cnt++;
	}

	if(cnt<3) {
		printf("소수\n");
	} else {
		printf("소수X\n");
	}
}