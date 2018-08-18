
// 삽입정렬

#include<stdio.h>

int main(){

	int i,j;

	int arr[5] = {8,5,6,2,4};
	int tmp;
	int key;

	printf("before : ");
	for(i=0;i<5;i++) printf("%d ",arr[i]);
	printf("\n");

	for(i=1;i<5;i++){

		for(j=i;j>0;j--) {

			if(arr[j] < arr[j-1]) {

				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	printf("after : ");
	for(i=0;i<5;i++) printf("%d ",arr[i]);
	printf("\n");
}