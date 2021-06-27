#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,x[10000],n,k,b;  double p;
	printf("サイコロでa以上の目がでた回数と割合を出します。\naを入力してください。\n");
	scanf("%d",&a);
	printf("サイコロを振る回数を入力してください。");
	scanf("%d",&n);
	b=0;
	for(k=0;k<n;k++){
		x[k]=6*rand()/(RAND_MAX+1)+1;
		if(x[k]>=a) b++;
	}
	p=(double)b/n*100;
	printf("回数:%d 割合:%.3lf%%",b,p);
	system("pause");
}
