
// 최대공약수, 최소공배수 (유클리드 호제법 이용)

#include<stdio.h>

int main(){

	int a,b;
	int min_tmp=0,max_tmp=0;
	int big,small;
	int tmp=0, rest=0;

	scanf("%d %d",&a,&b);

	big = a>b?a:b;
	small = a>b?b:a;

	while(min_tmp == 0) {

		if( big%small == 0){

			min_tmp = small;

		} else {

			tmp = big;
			big = small;
			small = tmp%small;
		}
	}

	max_tmp = (a*b)/min_tmp;

	printf("%d\n", min_tmp);
	printf("%d\n", max_tmp);

}


