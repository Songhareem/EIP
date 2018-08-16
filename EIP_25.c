
// 선택정렬

#include<stdio.h>

int main(){

	int i,j;

	int arr[5] = {8,5,6,2,4};
	int tmp;

	printf("before : ");
	for(i=0;i<5;i++) printf("%d ",arr[i]);
	printf("\n");

	for(i=0;i<4;i++) {

		for(j=i+1;j<5;j++){

			if(arr[i] > arr[j]) {

				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	printf("after : ");
	for(i=0;i<5;i++) printf("%d ",arr[i]);
	printf("\n");
}