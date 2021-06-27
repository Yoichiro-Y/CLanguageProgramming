#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int a[1000],big,small,k,n,sum,sum2,range; double ave,ave2,bun,hen;
	printf("データの個数を入力してください");
	scanf("%d",&n);
	for(k=0;k<n;k++){
		printf("a[%d]=",k+1);
		scanf("%d",&a[k]);
	}
	big=a[0];
	for(k=1;k<n;k++){
		if(a[k]>big)big=a[k];
	}
	printf("最大値は%dです。\n",big);
	small=a[0];
	for(k=1;k<n;k++){
		if(a[k]<small) small=a[k];
	}
	printf("最小値は%dです。\n",small);
	range=big-small;
	printf(“範囲は%dです。\n”,range);
	sum=0;
	for(k=0;k<n;k++){
		sum+=a[k];
	}
	ave=(double)sum/n;
	printf("標本平均値は%lfです。\n",ave);
	sum2=0;
	for(k=0;k<n;k++){
		sum2+=a[k]*a[k];
	}
	bun=sum2/n-ave*ave;
	hen=sqrt(bun);
	printf("標本分散は%lfです。\n標本偏差は%lfです。",bun,hen);
	system("pause");
}
