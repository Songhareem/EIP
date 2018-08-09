
// 1+2+4+7+11+16+22+... 20번째 항까지 합산

#include<stdio.h>

int main(){

	int i=0;
	int j=1;
	int tmp=1;

	do
	{
		i++;
		j += i;
		tmp += j;
	} while (i<19);

	printf("result : %d\n",tmp);
}
