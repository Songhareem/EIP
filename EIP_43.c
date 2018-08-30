
// 화폐 종류별 매수 계산

#include<stdio.h>
#include<string.h>

#define LEN 10

struct member{
	
	char n[10];
	int p, pm[10];
};

int main(){
	
	FILE *inf;

	inf=fopen("EIP_43_data.txt","r");

	struct member data;
	
	int tm[10];
	int k;
	int tmp;
	int sw;
	int init;

	printf("\t\t\t출장비 지급표\n");
	printf("성명 출장비지급액 오만 일만 오천 일천 오백 일백 오십 일십   오   일\n");

	for(k=0;k<LEN;k++) {

		tm[k] = data.pm[k] =0;
	}

	while(1){

		fscanf(inf,"%s %d",data.n, &data.p);
		if(strcmp(data.n,"quit") == 0) break;
		printf("%s\t%d\t",data.n,data.p);

		tmp = data.p;
		init = 50000;
		sw = 1;

		for(k=0;k<LEN;k++) {

			data.pm[k] = tmp / init;
			tmp -= data.pm[k]*init;
			tm[k] += data.pm[k];
			printf("%5d",data.pm[k]);

			if(sw==1) {

				init /= 5;
				sw=0;
			}
			else {

				init /= 2;
				sw=1;
			}
		}

		printf("\n");
	}

	printf("전체 화폐 매수  ");
	for(k=0;k<LEN;k++) {
		printf("%5d",tm[k]);
	} 
	fclose(inf);

}