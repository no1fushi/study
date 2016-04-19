// study.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//
#include <stdio.h>//stdio.h(入出力ヘッダファイル)を読み込む

//printf ()の中を出力
//puts　上の改行するver
//scanf  入力
//;は一行の区切り
//||かつ&&または

int main(void) {//関数

	int x;//整数型
	double y;//少数型
	char c;//文字列型

	printf("hello world\n");//\n=改行
	scanf("%d" , &x);/*xという変数を定義しないと動かない
					 scanfは&代入*/
	scanf("%d" , &x);//デバック用入力待ち

return(0);//返す
}