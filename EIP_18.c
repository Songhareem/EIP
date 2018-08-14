
// 소수점이 포함된 2진수를 10진수로 변환
// 단, 10자리 2진수는 문자열,
// 1~5번째까지는 정수표현 6~10번째까지는 소수점이하 표현

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

	char ch[11], devide[2];
	double d,e;
	double total=0;
	int c=-1;

	devide[1] = '\0';

	scanf("%s",ch);

	while(1){

		c++;
		if(c<=9) {

			devide[0] = ch[c];
			d=atoi(devide);
			e=d*pow(2,4-c);
			total += e;
		}
		else {
			printf("%8.5f",total);
			break;
		}
	}

}