
// 1차원 배열 이분 검색
// 찾는 자료가 없다면 Not found, 있다면 몇번째에 있는지 출력 

#include<stdio.h>

int main(){

	int i,j,L,h,m;

	int data[10] = {8,15,35,55,60,61,70,80,92,99};

	printf("data : ");
	for(i=0;i<10;i++) printf("%2d ",data[i]);
	printf("\n");
	
	scanf("%d",&j);
	L=0;
	h=9;

	while(1){

		if(L<=h) {

			m=(L+h)/2;

			if(j==data[m]) {

				printf("%d %d",j,m+1);

				break;
			}

			if(j<data[m]) {

				h=m-1;
			} else {

				L=m+1;
			}
		} else {

			printf("%d Not found\n");
			break;
		} 
	}
}