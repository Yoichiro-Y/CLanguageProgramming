#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,a[1000],K,m,i,j,k,temp,p,total[100],b[100]; double ave[100];
	printf("学生の人数を入力してください");
	scanf("%d",&n);
	printf("成績を入力してください\n");
	for(m=1;m<=n;m++){
		printf("学籍番号%d:",m);
		scanf("%d",&a[m]);
	}
	for(m=1;m<n;m++){
	for(i=m,j=m+1;j<=n;j++){
		if(a[j]<a[i])i=j;
	}
	temp=a[m]; a[m]=a[i]; a[i]=temp;
	}
	printf("グループ数を入力してください");
	scanf("%d",&K);
	for(p=1;p<=10;p++)total[p]=0;
	for(p=1;p<=K;p++){
		for(m=p;m<=n;m=m+K){total[p]+=a[m];b[p]++;}
		ave[p]=(double)total[p]/b[p];
	}
	for(p=1;p<=K;p++){
		printf("グループ%d:",p);
		for(m=p;m<=n;m=m+K){printf("%d,",a[m]);}
		printf("（成績平均=%lf)\n",ave[p]);
	}
	system("pause");
}
