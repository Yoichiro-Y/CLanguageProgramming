#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,a[1000],k,p;
	printf("データの個数を入力してください。");
	scanf("%d",&n);
	for(k=0;k<n;k++){
		printf("a[%d]=",k);
		scanf("%d",&a[k]);
	}
	p=a[0];
	for(k=0;k<n-1;k++){
		a[k]=a[k+1];
	}
	a[n-1]=p;
	printf("入れ替え後\n");
	for(k=0;k<n;k++){
	 printf("a[%d]=%d\n",k,a[k]);
	}

	system("pause");
}

