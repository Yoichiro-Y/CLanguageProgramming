/*
１．配列をランダムに入れ替えるshuffle関数を生成する。
２．b[]={1,2,3,4,5,6,7,8,9}とする。
３．sulfle関数でb[]を入れ替える。
４．プレイヤーA（人）にa[i]を入力させる。
５．a[i]が1以上9以下でなければステップ４へ。
６．a[i]がa[i-1],a[i-2]…a[0]のいずれかと同じ値ならばステップ４へ。
７．a[i]+b[i]をpointに代入する。
８．a[i]>b[i]ならばsumA+=pointとする。
９．b[i]>a[i]ならばsumB+=pointとする。
１０．i++としてi<9ならばステップ4へ。
１１．sumA>sumBならばAの勝利。
１２．sumA>sumBならばBの勝利。
１３．sumA==sumBばらば引き分け。
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shuffle(int array[],int size){
	int t,i,j;
    i = size;
    while (i > 1) {
		srand( (unsigned int)time(NULL) );
        j = rand() % i;
        i--;
        t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}
int main(){
	int a[10],i=0,q,p=1,sumA=0,sumB=0,point;
	int b[]={1,2,3,4,5,6,7,8,9};
	shuffle(b, 9);
	printf("ゲーム開始！\n各ターンごとに1～9の重複しない数字を選んでください。\n");
	for(i=0;i<9;i++){
		printf("第%dターン\nプレイヤーAは%d回目の数字を入力してください：",i+1,i+1);
		scanf("%d",&a[i]);
		q=i;
		while(1){
			p=1;
			if(a[i]>0&&a[i]<10){
				while(i>0){
					if(a[q]==a[i-1]){
						printf("すでに選ばれた数字です。再度入力してください:");
						p=0;
						i=q;
						scanf("%d",&a[i]);
						break;
					}
					i--;
				}
				if(p==1){
					i=q;
					break;
				}
			}
			else {
				printf("１～９の数字のみ選べます。再度入力してください:");
				scanf("%d",&a[i]);
			}
		}
		if(a[i]>b[i]){
			point=a[i]+b[i];
			printf("YOU WIN!!\nプレイヤーAは%dポイント獲得です。\n",point);
			sumA=sumA+point;
		}
		else if(b[i]>a[i]){
			point=a[i]+b[i];
			printf("YOU LOSE...\nプレイヤーBは%dポイント獲得です。\n",point);
			sumB=sumB+point;
		}
		else {
			printf("DRAW\n引き分けです。\n");
		}
	}
	printf("【結果発表】\nプレイヤーA：%dポイント　　プレイヤーB：%dポイント\n",sumA,sumB);
	if(sumA>sumB){
		printf("=====CONGRATURATION=====\nプレイヤーAの勝利です");
	}
	else if(sumB>sumA){
		printf("=====GAME OVER=====\nプレイヤーBの勝利です");
	}
	else {
		printf("=====DRAW=====\n引き分けです");
	}
	system("pause");
}
