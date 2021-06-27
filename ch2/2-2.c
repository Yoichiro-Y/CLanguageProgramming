#include<stdio.h>
#include<stdlib.h>
int main(){
	int d1,h1,m1,d2,h2,m2,min1,min2,day,charge;
	while(1){
	printf("入庫した日時を入力してください。日,時,分を「,」で区切って入力してください\n");
	scanf("%d,%d,%d",&d1,&h1,&m1);
	printf("同様にして出庫した日時を入力してください。\n");
	scanf("%d,%d,%d",&d2,&h2,&m2);
	min1=(d2-d1)*24*60+(h2-h1)*60+m2-m1;
	min2=min1/30;
	day=min1/1440;
		if(min2<=7){
			charge=260*min2;
				printf("料金は%d円です\n",charge);
	}
		else if(min2<=48){
            charge=2060;
				printf("料金は%d円です\n",charge);
		}
		else if(min2<=240){
			charge=2060*day;
				printf("料金は%d円です\n",charge);
		}
		else{
			charge=10300+(day-5)*520;
				printf("料金は%d円です\n",charge);
		}
		printf("%d,%d",min1,min2);
;
	}

	system("pause");

}