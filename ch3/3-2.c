#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c,d;
	d=1;
	printf("整数を二つ入力してください\n");
	scanf("%d,%d",&a,&b);
	while(1){
		c=a*d;
		if(c%b==0)break;
		else d++;
	}
	printf("最小公倍数は%dです。",c);
	system("pause");


}
