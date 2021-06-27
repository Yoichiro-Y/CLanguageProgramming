/*
1.配列をランダムに入れ替えるshuffle関数を生成する。
2.a[]={0,1,2,3,45,6,7,8,9},b[]={1,2,3,4,5,6,7,8,9}とする。
3.sulfle関数でb[]を入れ替える。
4.a[0]を０～９でランダムで代入する。
5.a[0]>b[0]ならばsumA+=a[0]+b[0]とする。b[0]>a[0]ならばsumB+=a[0]+b[0]とする。
6.pを0~9でランダムに代入する。
7.a[p]がb[i-1]以上9以下かつa[p]!=0ならばステップ１１へ。
8.r=9とする。
9.p=a[r]とし、a[p]=0でなければステップ１１へ。
10.rにr-1を代入し、ステップ８へ戻る。
11.a[p]+b[i]をpointに代入する。
12.a[p]>b[i]ならばsumA+=pointとする。
13.b[p]>a[i]ならばsumB+=pointとする。
14.i++としてi<9ならばステップ６へ。
15.sumA>sumBならばAの勝利。
16.sumA>sumBならばBの勝利。
17.sumA==sumBばらば引き分け。
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shuffle(int array[],int size){
	int t,i,j;
    i = size;
    while (i > 1) {
		srand( (unsigned int)time(NULL)*1234);
        j = rand() % i;
        i--;
        t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}
int main(){
	int a[]={0,1,2,3,4,5,6,7,8,9},i=0,q,p=1,sumA=0,sumB=0,point,k=0,r,b[]={1,2,3,4,5,6,7,8,9};
	shuffle(b, 9);
	printf("ゲーム開始！\n");
     p=rand()%10;
	 if(a[p]>b[0]){
			point=a[p]+b[0];
			printf("プレイヤーAの勝利です\nプレイヤーAは%dポイント獲得です。\n",point);
			sumA=sumA+point;
			a[p]=0;
		}
		else if(b[0]>a[p]){
			point=a[p]+b[0];
			printf("プレイヤーBの勝利です\nプレイヤーBは%dポイント獲得です。\n",point);
			sumB=sumB+point;
			a[p]=0;
		}
		else {
			printf("引き分けです。\n");
			a[p]=0;
		}
		for(i=1;i<9;i++){
			while(1){
				p=rand()%10;
				if(a[p]!=0&&a[p]>=b[i-1])break;
				else {
					r=9;
					while(1){
						p=a[r];
						if(a[p]!=0)break;
						r--;
					}
					break;
			}
			a[p]=0;
		}
		if(a[p]>b[i]){
			point=a[p]+b[i];
			printf("プレイヤーAの勝利です\nプレイヤーAは%dポイント獲得です。\n",point);
			sumA=sumA+point;
			a[p]=0;
		}
		else if(b[i]>a[p]){
			point=a[p]+b[i];
			printf("プレイヤーBの勝利です\nプレイヤーBは%dポイント獲得です。\n",point);
			sumB=sumB+point;
			a[p]=0;
		}
		else {
			printf("DRAW\n引き分けです。\n");
			a[p]=0;
		}
	}
	printf("【結果発表】\nプレイヤーA：%dポイント　　プレイヤーB：%dポイント\n",sumA,sumB);
	if(sumA>sumB){
		printf("==========\nプレイヤーAの勝利です");
	}
	else if(sumB>sumA){
		printf("==========\nプレイヤーBの勝利です");
	}
	else {
		printf("==========\n引き分けです");
	}
	system("pause");
}
