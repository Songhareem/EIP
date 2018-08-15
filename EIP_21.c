
// 7에 가장 가까운 수 구하기
// 10개의 1의 자리 양의 정수 중 7에 가장 가까운 자료를 찾아라
// 근사값이 2개인 경우 나중에 찾은 값을 출력

#include<stdio.h>

#define STAND 7

int main(){

	int arr[10] = {1,5,2,4,2,6,8,9,3,1};
	int i;
	int tmp1=0,tmp2=0;
	int result;

	tmp1=STAND-arr[0];
	result=arr[0];
	if(tmp1<0) tmp1 *=-1;

	for(i=1;i<=10;i++){

		tmp2 = STAND-arr[i];
		if(tmp2<0) tmp2 *=-1;
		if(tmp1>=tmp2) {
			tmp1=tmp2;
			result=arr[i];
		}
	}

	printf("%d %d",tmp1,result);
}