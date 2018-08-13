
// 소인수분해

#include<stdio.h>

int main(){

	int a;
	int i=2,dest=0;
	int prime[100];
	int *pprime = &prime[0];

	scanf("%d",&a);

	//for(i=0;i<100;i++) prime[i] = 0;

 	while(1){

 		if(a%i == 0) {

 			a = a/i; 			
 			
 			*pprime = i;

 			pprime++;

 			dest++;
 			
 			i=2;

 			if(a==1) break;

 		} 

 		i++;
 	}

	for(i=0;i<dest;i++){

 		printf("%d\n",prime[i]);
 	}
}


