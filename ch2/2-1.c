#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	while(1){
		    double a,b,c,D,r1,r2,img,i1,i2,;
			scanf ("%lf,%lf,%lf",&a,&b,&c);
			D=b*b-4*a*c;
			img=(-1)*D;
			r1=(-b+sqrt(D))/(2*a); r2= (-b-sqrt(D))/(2*a);
			i1=(-1)*b/2*a; i2=(sqrt(img))/2*a;
		    if(a==0&&b==0&&c==0) {printf("xはすべての実数です");}
			else if(a==0&&b==0){printf("xの解は存在しません。");}
			else if(a==0&&b!=0){printf("xは%.2lfです。",(-1)*(c/b));}
			else if(D==0){printf("xは%.2lfです。",r1);}
			else if(D>0){printf("xは%.2lfと%.2lfです。",r1,r2);}
			else {printf("xは%.2lf+%.2lfiと%.2lf+%.2lfi",i1,i2,i1,i2);}

	}
	system("pause");

}
