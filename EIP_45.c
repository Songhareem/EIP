
// 부서별합계

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct member{
	
	char bu[5], irum[10];
	int bon,su;
};

int main(){
	
	FILE *inf, *outf;

	inf=fopen("EIP_45_data.txt","r");
	outf=fopen("EIP_45_result.txt","w");
	struct member data;
	
	int gtot,butot,keb;
	char bubi[5];

	gtot=0;
	fprintf(outf,"\t\t사원 급여표\n");

	fprintf(outf,"부서\n성명\t본봉\t수당\t합계\n");

	fscanf(inf,"%s %s %d %d",data.bu,data.irum,&data.bon,&data.su);

	while(1){

		butot=0;
		strcpy(bubi, data.bu);
		do {

			keb = data.bon + data.su;
			butot += keb;
			fprintf(outf,"%s\t%s\t%d\t%d\t%d\n",
				data.bu,data.irum,data.bon,data.su,keb);

			if(fscanf(inf,"%s %s %d %d",
				data.bu,data.irum,&data.bon,&data.su)==EOF) {

				gtot+=butot;
				fprintf(outf,"부서 합계 : %d\n",butot);
				fprintf(outf,"전체 합계 : %d\n",gtot);

				fclose(outf);
				fclose(inf);

				exit(0);
			}
		}while(strcmp(bubi, data.bu) == 0);

		gtot+=butot;
		fprintf(outf,"부서 합계 : %d\n",butot);
	}
}