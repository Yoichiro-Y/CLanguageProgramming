// 1.	乱数を生成する
// 2.	m,nを整数とする。
// 3.	１で生成した乱数をm-(-m)+1でわってそこに-mをたしたもの（-m以上ｍ以下の整数乱数）をa[i](i=1,2…n)に代入する。
// 4.	a[i](i=1,2…n)を合計したものをｎで割ったものが平均

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int randBetween(int a,int b){
	int i;
	srand((unsigned)time(NULL));
	i=rand()%(b-a+1)+a;
	return i;
}


void RandArray(int m,int n,int a[]){
		int i;
		for(i=0;i<n;i++){
			srand((unsigned)time(NULL));
			i=rand()%(2*m+1)+a;
			a[i]=randBetween(-m,m);
		}
}

int main(){
	int a[10000],n,i,m,sum; double ave;
	printf("n=");
	scanf("%d",&n);
	printf("m=");
	scanf("%d",&m);
	RandArray(m,n,a);
	sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	ave=(double)sum/n;
	printf("%d",sum);
	printf("平均は%lfです。",ave);
	system("pause");
}
