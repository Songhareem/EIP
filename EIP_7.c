#include<stdio.h>

int main(){

	int i=0;
	int j=1;
	int tmp=0;

	for(i=0;i<20;i++) {

		j += i;
		
		printf("%d ",i);

		if(i%2==0) {
			
			tmp += -j;		
			printf("%d %d\n",j, tmp);

		} else if(i%2==1) {

			tmp += j;
			printf("%d %d\n",j, tmp);
		}
	}

	//printf("%d\n",tmp);
}