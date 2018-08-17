
// 버블정렬 중간종료
// 중간에 교환이 발생하지 않는다면 종료

#include<stdio.h>

int main(){

	int i,j,c;

	int arr[5] = {4,5,1,2,3};
	int tmp;
	int sw = 0;

	printf("before : ");
	for(i=0;i<5;i++) printf("%d ",arr[i]);
	printf("\n");

	for(i=4;i>0;i--) {

		sw = 0;

		for(j=0;j<i;j++){
			
			if(arr[j] >= arr[j+1]) {

				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;

				sw = 1;
 			}
		}

		printf("%d : ",4-(i-1));
		for(c=0;c<5;c++) printf("%d ",arr[c]);
		printf("\n");

		if(sw == 0) break;
	}

	printf("after : ");
	for(i=0;i<5;i++) printf("%d ",arr[i]);
	printf("\n");
}