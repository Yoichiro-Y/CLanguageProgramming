#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void irekae(int A[][10],int m,int n,int x,int y){
	int i;
	for(i=0;i<n;i++){
		swap(&A[x][i],&A[y][i]);
	}
}

int main(){
	int p,q,a[10][10],m,n,x,y;
	printf("m行n列の行列を作ります。\nm=");
	scanf("%d",&m);
	printf("n=");
	scanf("%d",&n);
	for(p=0;p<m;p++){
		for(q=0;q<n;q++){
			printf("a[%d][%d]=",p+1,q+1);
			scanf("%d",&a[p][q]);
		}
	}
	for(p=0;p<m;p++){
		for(q=0;q<n;q++){
			printf("%2d ",a[p][q]);
		}
		printf("\n");
	}
	printf("x行目とy行目を入れ替えます。\nx=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	irekae(a,m,n,x-1,y-1);
	for(p=0;p<m;p++){
		for(q=0;q<n;q++){
			printf("%2d ",a[p][q]);
		}
		printf("\n");
	}
	system("pause");
}
