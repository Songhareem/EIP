
// 10진수를 임의의 진수로 변환하기
// 0~9,A,B,C,D,E,F 는 배열에 저장되어 있음 (누승 사용)

#include<stdio.h>

int main(){

	char ch[16] = {'0','1','2','3','4',
					'5','6','7','8','9',
					'A','B','C','D','E','F'};
	int i=0;
	int num, n;
	int tmp=1;
	int cnt=0;

	scanf("%d %d",&num,&n);

	while(1){
		if(tmp>n) {
			tmp /= num;
			cnt--;
			break;
		}
		tmp *= num;
		cnt++;
	}

	while(cnt>-1) {
		
		if(tmp<=n) {
			printf("%c",ch[n/tmp]);
			n %= tmp;
			tmp /= num;
		} else if(tmp>n) {
			printf("%c",ch[n%tmp]);
			tmp /= num;
		}

		cnt--;

	}
}