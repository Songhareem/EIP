
// 스택
// 10개 요소 1차원 배열 스택 만들기
// 데이터가 스택이상으로 커지면 "OVER FLOW" 출력 후,
// 데이터 출력, 데이터가 없다면 "UNDER FLOW" 출력 후 종료

#include<stdio.h>

int main(){

	int i;
	int cmd = 0; // 1 = input, 2 = output, 3 = print
	int top = 0;
	int cnt = 0;
	int stack[10];

	while(cnt<30) {

		scanf("%d",&cmd);
		printf("cmd : %d\n",cmd);
		
		if(cmd == 1) {

			if(top == 11) {

				printf("OVER FLOW");
				top -=1;
				continue;
			}

			stack[top] = top;
			top++;

			for(i=0;i<10;i++) printf("stack[%d] : %d\n",i,stack[i]);
	
		}

		if(cmd == 2) {

			if(top == -1) {

				printf("UNDER FLOW");
				top +=1;
				continue;
			}

			printf("stack[%d] : %d\n",top,stack[top]);
			top--;
		}

		if(cmd == 3) {

			for(i=0;i<10;i++) printf("stack[%d] : %d\n",i,stack[i]);
			break;
		}

		cnt++;
	}
}