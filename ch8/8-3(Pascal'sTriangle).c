/* // アルゴリズム
1.	i=1,p=nとする。
2.	pがk以下ならp=nとしてステップ4へ
3.	iをi*pとし、ｐをp－1としてステップ２へ
4.	pが1以下ならiを戻り値としてプログラム終了
5.	iをi/pとし、pをp-1としてステップ４へ */

// プログラム
#include<stdio.h>
#include<stdlib.h>

int bc1(int n,int k){
	double i; int p;
	i=1;
	for(p=n;p>=k+1;p--){
		i*=p;
	}
	for(p=n-k;p>1;p--){
		i/=p;
	}
	return i;
}
int main(){
	double i; int n,k,p,q,r;
	printf("n段のパスカルの三角形を作成します。\nn=");
	scanf("%d",&n);
	for(p=0;p<n;p++){
		for(r=1;r<=n-p;r++){
			printf(" ");
		}
		for(q=0;q<=p;q++){
			i=bc1(p,q);
			printf("%.0lf ",i);
		}
		printf("\n");
	}
	system("pause");
}
