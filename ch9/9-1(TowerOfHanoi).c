// １．	もしm=1ならばi→jとしてアルゴリズム終了。
// ２．	hanoi(m-1,I,6-i-j)の次にi→j、それに続けてhanoi(m-1,6-i-j,j)を並べたものが答え。アルゴリズム終了。


#include<stdio.h>
#include<stdlib.h>

void hanoi(int m,int i,int j){
	if(m==1){
		printf("(%d->%d)",i,j);
	}
	else{
		hanoi(m-1,i,6-i-j);
		printf("(%d->%d)",i,j);
		hanoi(m-1,6-i-j,j);
	}
}
int main(){
	int m,i,j;
	printf("m=");
	scanf("%d",&m);
	printf("i=");
	scanf("%d",&i);
	printf("j=");
	scanf("%d",&j);
	hanoi(m,i,j);
	system("pause");
}
