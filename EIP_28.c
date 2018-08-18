
// 석차구하기 배열이용

#include<stdio.h>

int main(){

	int i,j;

	int score[5] = {70,80,60,90,70};
	int rank[5] = {1,1,1,1,1};

	printf("score : ");
	for(i=0;i<5;i++) printf("%d ",score[i]);
	printf("\n");

	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {

			if(score[i] < score[j]) rank[i]++;
		}
	}

	printf("rank  : ");
	for(i=0;i<5;i++) printf("%2d ",rank[i]);
	printf("\n");
}