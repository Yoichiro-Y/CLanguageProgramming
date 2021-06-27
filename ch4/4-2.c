#include<stdio.h>
#include<stdlib.h>

int main(){
	double a[10][10],b[10][10],c[10][10]; int i,k,p,m,n,j;
	printf("m行n列とn行p列の行列の積を計算します。\nm=");
	scanf("%d",&m);
	printf("n=");
	scanf("%d",&n);
	printf("p=");
	scanf("%d",&p);
	printf("一つ目の行列を入力してください");
	for(i=0;i<m;i++){
		for(k=0;k<n;k++){
			printf("a[%d][%d]=",i+1,k+1);
			scanf("%d",&a[i][k]);
		}
	}
	printf("二つ目の行列を入力してください");
	for(i=0;i<n;i++){
		for(k=0;k<p;k++){
			printf("b[%d][%d]=",i+1,k+1);
			scanf("%d",&b[i][k]);
		}
	}
	for(i=0;i<m;i++){
		for(k=0;k<p;k++){
			c[i][k]=a[i][k]*b[i][k];
			for(i=0;i<m;i++){
				for(k=0;k<p;i++){
					for(j=0;j<m;j++){
					c[i][k]=c[i][j]+a[i][j]*b[j][k];
					}
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(k=0;k<p;k++){
			printf("c[%d][%d]=%d",i+1,k+1,c[i][k]);
		}
	}
	system("pause");

}