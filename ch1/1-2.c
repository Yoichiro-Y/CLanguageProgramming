#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	double x,y,z,Soka,Kika,Chowa;
	printf("x,y,zの平均を計算します。「,」で区切ってx,y,zの値を入力してください。");
	scanf("%lf,%lf,%lf",&x,&y,&z);
	Soka=(x+y+z)/3;
	Kika=(pow(x*y*z,1.0/3.0));
	Chowa=3/(1/x+1/y+1/z);
	printf("相加平均は%.2lf\n相乗平均は%.2lf\n調和平均は%.2lf\n",Soka,Kika,Chowa);
	system("pause");
}
