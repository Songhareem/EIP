
// 10개 값에서 최대값, 최소값 출력

#include<stdio.h>

int main(){

	int arr[10] = {1,10,3,4,5,6,7,8,9,2};
	int max,min;
	int i;

	max=min=arr[0];

	for(i=1;i<9;i++) {

		if(max<arr[i]) max=arr[i];
		if(min>arr[i]) min=arr[i];
	}

	printf("max : %d, min : %d\n",max,min);
}