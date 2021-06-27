#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[1000],b,c,m,n;
	scanf("%d",n);
	c=0; b=1;
	for(m=0;n>0;m++){
		a[m]=n%8;
		c+=a[m]*b;
		n=n/8;
		b=b*10;
	}
	printf("8進数では%d",c);
	system("pause");
}
