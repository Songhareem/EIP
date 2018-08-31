
// 마방진 만들기

#include<stdio.h>

int main(){

	int i,j,k,nmg;
	int a[5][5] = {0};

	i=0;
	j=5/2;

	for(k=1;k<=25;k++) {

		a[i][j] = k;
		nmg = k-(k/5)*5;
		if(nmg==0){

			i++;
			continue;
		}

		i--;
		j++;

		if(i<0){

			i=4;
		}
		if(j>4){

			j=0;
		}
	}

	for(i=0;i<5;i++) {

		for(j=0;j<5;j++) {

			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
}