
// 2차원 배열 이분 검색
// 찾는 자료가 없다면 Not found
// 번호를 받아서 해당하는 번호의 점수 출력 

#include<stdio.h>

int main(){

	int i,j;
	int sp=0,ep=9; // data[0] ~ data[9]
	int num;
	int mid;

	int data[2][10] = {{1,2,3,4,5,6,7,8,9,10},
					   {75,68,15,27,45,78,87,98,87,55}};

	printf("num : ");
	for(j=0;j<10;j++) printf("%2d ",data[0][j]);
	printf("\n");
	printf("val : ");
	for(j=0;j<10;j++) printf("%2d ",data[1][j]);
	printf("\n");
	
	scanf("%d",&num);

	while(1) {

		if(sp<=ep) {

			mid = (sp+ep)/2;

			if(data[0][mid] == num) {

				printf("%d\n",data[1][mid]);
				break;
			}

			if(data[0][mid] < num) {

				ep = mid-1;
			} else {

				sp = mid+1;
			}
		} else {

			printf("Not found\n");
			break;
		}
	}
}