// hello.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include <stdio.h>

int main(void)
{
	int x;
	int i;
	int y=1;

	while(y < 2746){//()の条件のうち{}の中を繰り返す
		printf("%d\n" , y );
		scanf("%d" , &x);

		y = y * x;
	}
	printf("%d\n" , y);

	/*while(y < 30){
		scanf("%d" , &x);
		if(x>0 && x<10){//()の条件で{}を実行
			 //(i= 0; i < 20; i++)//iを0にして<回i+1
			for(i= 0; i < x; i++) {//
				puts("hello world");
				y++;
			}
		}
	}
	
	y++:
	y= y + 1//=は代入
	==で等しい
	
	*/

	scanf("%d" , &x);

	return 0;
}
