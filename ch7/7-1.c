#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void sort(int x[],int n){
	int m,i;
	for(m=n;m<n;m++){
		for(i=1;i<m;i++){
			if(x[i]>x[i+1])swap(&x[i],&x[i+1]);
		}
	}
}
int main(){
	int a[1000],c,d,e,j;
	printf("数の個数を入力してください");
	scanf("%d",&j);
	for(c=1;c<=j;c++){
		printf("a[%d]=",c);
		scanf("%d",&a[c]);
	}
	sort(a,j);
	printf("昇順にすると\n");
	for(c=1;c<=j;c++) printf("a[%d]=%d\n",c,a[c]);
	system("pause");
}
