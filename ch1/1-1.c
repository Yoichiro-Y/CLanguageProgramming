#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	double x,y,POW,EXP;
	printf("xのy乗を計算します。「,」で区切ってx,yの値を入力してください。");
	scanf("%lf,%lf",&x,&y);
	POW=(pow(x,y));
	EXP=exp(y*log(x));
	printf("%.50lf\n",POW);
	printf("%.50lf\n",EXP);
	system("pause");
}