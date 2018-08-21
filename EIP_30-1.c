
// 병합
// 배열 a(10),b(10),c(20)에는 정수가 오름차순으로 정렬되어 있음
// 배열 a,b에는 데이터가 10건 미만, 0 다음에는 데이터가 없는것으로 간주
// c에 a,b 데이터를 병합시키되, 중복 데이터는 한번만 이동, 마지막에는 0입력

#include<stdio.h>

int main(){

	int i=0;
	int j=0;
	int k=0;
	int cnt=0;

	char save[5] = "save";
	int a[10] = {2,4,6,8,10,0};
	int b[10] = {1,3,5,7,9,0};
	int c[20];

	while(1) {

		if(a[i] == 0 && b[j] == 0) {

			c[k] = a[i];
			break;
		} else if(a[i] == 0 && b[j] != 0) {

			c[k] = b[j];

			j++;
			k++;
			continue;
		} else if(a[i] != 0 && b[j] == 0) {

			c[k] = a[i];

			i++;
			k++;
			continue;
		}

		if(a[i] < b[j]) {

			c[k] = a[i];

			printf("%d %d\n",a[i],c[k]);

			i++;
			k++;	
		} else if (a[i] > b[j]) {

			c[k] = b[j];

			printf("%d %d\n",b[j],c[k]);

			j++;
			k++;
		} else if (a[i] == b[j]) {

			c[k] = a[i];

			printf("%d %d\n",a[i],c[k]);

			i++;
			j++;
			k++;
		}

	}

	for(k=0;k<20;k++) {

		if(c[k]==0) break;
		printf("%d ",c[k]);
	}
}