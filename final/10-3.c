/*
1.a[]={0,1,2,3,45,6,7,8,9},b[]={0,1,2,3,4,5,6,7,8,9},i=1とする。
2.p,sを０～９でランダムで代入する。
3.a[p]>b[s]ならばsumA+=a[p]+b[s]とする。b[p]>a[s]ならばsumB+=a[p]+b[s]とする。
4.pを0~9でランダムに代入する。
5.a[p]が相手の手札の最大以上かつa[p]!=0ならばステップ9へ。
6.r=9とする。
7.p=a[r]とし、a[p]=0でなければステップ9へ。
8.rにr-1を代入し、ステップ7へ戻る。
9.a[p]+b[s]をpointに代入する。
10.a[p]>b[s]ならばsumA+=pointとする。
11.b[p]>a[s]ならばsumB+=pointとする。
12.i++としてi<9ならばステップ６へ。
13.sumA>sumBならばAの勝利。
14.sumA>sumBならばBの勝利。
15.sumA==sumBばらば引き分け。
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
		int x,y=0,z=0,total1=0,total2=0,total3=0,total4=0; double shoritu,ave2,ave3,ave4,ave5,hensa1,hensa2,bunsan1,bunsan2;
		srand((time(NULL)*12345));
		for(x=0;x<10000;x++){
			int a[]={0,1,2,3,4,5,6,7,8,9},i=0,q,p=1,sumA=0,sumB=0,point,k=0,j,m=9,t,r,b[]={0,1,2,3,4,5,6,7,8,9},big,s,sum1=0,ave1=0,g,w,v,sum2;
			 p=rand()%9+1;
			 s=rand()%9+1;
			 if(a[p]>b[s]){
					point=a[p]+b[s];
					sumA=sumA+point;
					a[p]=0;
					b[s]=0;
				}
				else if(b[s]>a[p]){
					point=a[p]+b[s];
					sumB=sumB+point;
					a[p]=0;
					b[s]=0;
				}
				else {
					a[p]=0;
					b[s]=0;
				}
			for(i=1;i<9;i++){
				while(1){
					b[s]=rand()%9+1;
					if(b[s]!=0)break;
				}
				big=b[0];
				for(q=1;q<10;q++){
					if(b[q]>b[q-1])big=b[q];
				}
				while(1){
					p=rand()%10;
					if(a[p]!=0&&a[p]>=big)break;
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
			if(a[p]>b[s]){
					point=a[p]+b[s];
					sumA=sumA+point;
					a[p]=0;
					b[s]=0;
				}
				else if(b[s]>a[p]){
					point=a[p]+b[s];

					sumB=sumB+point;
					a[p]=0;
					b[s]=0;
				}
				else {
					a[p]=0;
					b[s]=0;
				}
			}

			if(sumA>sumB){
				y++;
				total1+=sumA;
				total2+=sumB;
				total3+=sumA*sumA;
				total4+=sumB*sumB;
			}
			else if(sumB>sumA){
				z++;
				total1+=sumA;
				total2+=sumB;
				total3+=sumA*sumA;
				total4+=sumB*sumB;
			}
			else{
				total1+=sumA;
				total2+=sumB;
				total3+=sumA*sumA;
				total4+=sumB*sumB;
			}
		}
		ave2=(double)total1/10000;
		ave3=(double)total2/10000;
		ave4=(double)total3/10000;
		ave5=(double)total4/10000;
		bunsan1=ave4-ave2*ave2;
		bunsan2=ave5-ave3*ave3;
		hensa1=sqrt(bunsan1);
		hensa2=sqrt(bunsan2);
		printf("A:%d勝　平均%lfポイント 標準偏差%lf\n B:%d勝　平均%lfポイント 標準偏差%lf\n",y,ave2,hensa1,z,ave3,hensa2);
		shoritu=((double)y/(y+z))*100;
		printf("Aの勝率：%lf%%",shoritu);
		system("pause");
}

