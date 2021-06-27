#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
		int a,c,win,lose,n; double p;
		c=0; win=0; lose=0;
		printf("賭けを行う回数を入力してください。");
		scanf("%d",&n);
		while(c<n){
			a=2*rand()/(RAND_MAX+1);
			if(a==0){
				win+=1;
				printf("勝ち");

			} else{
				lose+=1;
				printf("負け");

			}
			c+=1;

		}
		p=(double)win/n*100;
		if(win>lose){
			printf("%d勝%d敗で勝ち越しです。(勝率=%lf%%)",win,lose,p);
		}else if(lose>win){
			printf("%d勝%d敗で負け越しです。(勝率=%lf%%)",win,lose,p);
		}else{
			printf("%d勝%d敗で勝率50%%です。",win,lose);
		}
		system("pause");
}
