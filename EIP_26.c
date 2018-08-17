
// 버블정렬

#include<stdio.h>

int main(){

	int i,j;

	int arr[5] = {8,5,6,2,4};
	int tmp;

	printf("before : ");
	for(i=0;i<5;i++) printf("%d ",arr[i]);
	printf("\n");

	for(i=4;i>0;i--) {

		for(j=0;j<i;j++){
			
			if(arr[j] >= arr[j+1]) {

				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
 			}
			
		}
	}

	printf("after : ");
	for(i=0;i<5;i++) printf("%d ",arr[i]);
	printf("\n");
}