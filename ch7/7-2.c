#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void sort (int x[], int n) {
  int i, j;
  for (i=0;i<n-1;i++){
    for (j=n-1;j>=i+1;j--){
      if (x[j]<x[j-1]) {swap(&x[j],&x[j-1]);}
    }
  }
}
void randsequence(int x[],int n){
	int i,y;
	for(i=0;i<n;i++)x[i]=i+1;
	for(i=0;i<n;i++){
		y=(99*rand()/(RAND_MAX+1))+1;
		swap(&x[i],&x[y]);
	}
}



int main(){
		int a[1000],b[24],i,j,n;
		printf("ビンゴは何番までですか。");
		scanf("%d",&n);
		randsequence(a,n);
		for(j=0;j<24;j++)b[j]=a[j];
		sort(b,24);
		for(j=0;j<5;j++){
			printf("%2d ",b[j]);
		}
		printf("\n");
		for(j=5;j<10;j++){
			printf("%2d ",b[j]);
		}
		printf("\n");
		for(j=10;j<12;j++){
			printf("%2d ",b[j]);
		}
		printf(" 0 ");
		for(j=12;j<14;j++){
			printf("%2d ",b[j]);
		}
		printf("\n");
		for(j=14;j<19;j++){
			printf("%2d ",b[j]);
		}
		printf("\n");
		for(j=19;j<24;j++){
			printf("%2d ",b[j]);
		}
		system("pause");
}
