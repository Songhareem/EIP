
// 1의 보수, 2의 보수 구하기

#include<stdio.h>

#define XOR(x) x^0xff

int main(){

	unsigned char a = 0x01;

	scanf("%d",&a);

	a=0xff^a;

	//printf("0x%02x",a);
	printf("1의 보수 : %d ",a);
	a++;
	printf("2의 보수 : %d",a);
}