#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n,dosu[10],i,x,a;
	printf("コインを10回振る操作を繰り返します。\n操作の回数を入力して下さい。");
	scanf("%d",&n);
	for(a=0;a<n;a++){
	x=rand()%11;
	if(x=0)dosu[0]++;
	else if(x=1)dosu[1]++;
	else if(x=2)dosu[2]++;
	else if(x=3)dosu[3]++;
	else if(x=4)dosu[4]++;
	else if(x=5)dosu[5]++;
	else if(x=6)dosu[6]++;
	else if(x=7)dosu[7]++;
	else if(x=8)dosu[8]++;
	else if(x=9)dosu[9]++;
	else if(x=10)dosu[10]++;
	printf("%d",x);
	}
	for(i=0;i<11;i++)printf("%d",dosu[i]);


	system("pause");
}
