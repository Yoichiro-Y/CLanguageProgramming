#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[100000],b,c,k,m,N,n;
	scanf("%d",&N);
	for(k=0;k<=10000;k++){
		a[k]=N+k;
	}
	m=2;
	while(1){
		if(m>10000)break;
		else if(a[m]>0){
			for(n=m;m*n<=10000;n++){
				a[m*n]=0;
			}
		}
		m=m+1;
	}
	c=0;
	for(m=2;m<=N;m++){
		if(a[m]!=0){
			printf("%d,",a[m]);
			c++;
		}
	}
	printf("素数は%d個です",c);
	system("pause");
}
