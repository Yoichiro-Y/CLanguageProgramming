/* １．	もしnが１以下ならばプログラム終了
２．	もしｎが２かつa[1]>a[2]ならこれを入れ替える。プログラム終了
３．	もしｎが２でa[1]<=a[2]ならプログラム終了
４．	a[1]をpivotに保存し、leftを１rightをnとする。
５．	配列の右端から順番にpivotと比較し，pivot未満の値が見つかったら，その値を空の配列の左端に保存する。
６．	配列の左端から順番にpivotと比較し，pivot未満の値が見つかったら，その値を空の配列の右端に保存する。
７．	空の配列が残り一つになるまでステップ5と6を繰り返す。１つであればここにpivotの値を入れる。
８．	pivotより左に二つ以上配列があればこれらでクイックソートする。
９．	pivotより右に二つ以上配列があればこれらでクイックソートする。プログラム終了 */

#include<stdio.h>
#include<stdlib.h>


void quickSort(int *a,int n){
	int temp,left,right,e,pivot;
	if(n<=1) return;
	if(n==2){
		if(a[1]>a[2]){
			temp=a[1];
			a[1]=a[2];
			a[2]=temp;
			return;
		}
		else return;
	}
	pivot=a[1];
	left=1;
	right=n;
	while (1) {
        while (pivot<=a[right] && left<right) right--;
        if (left<right) a[left++]=a[right];
        else break;
        while (a[left]<=pivot && left<right) left++;
        if (left<right) a[right--]=a[left];
        else break;
    }
	e=right;
	a[e]=pivot;
    if (2<e) quickSort(a,e-1);
    if (e<n-1) quickSort(a+e,n-e);
}


int main(){
	int n,i,a[1000];
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	quickSort(a,n);
	for(i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	system("pause");
}
