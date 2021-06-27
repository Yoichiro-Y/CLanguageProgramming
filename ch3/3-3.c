#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c;
	printf("整数を入力してください\n");
	scanf("%d",&a);
	c=0;
	b=a-1;
	while(1){
		if(b<=0) break;
		else if(a%b==0){
			c=c+b;
		}
		b--;
	}
	if(c==a)printf("%dは完全数です",a);
	else printf("%dは完全数ではありません",a);
	system("pause");

}

