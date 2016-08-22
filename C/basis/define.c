/*#define(デファイン)
文字列の置き換えを行う*/
#include <stdio.h>
#define MAX 500//#define 置き換えたい文字列 置き換える文字列

int main(void)
{
	int a = MAX;
	printf("%d",a);

	return 0;
}

/*実行結果:500が表示される
各関数下のものに作用するので関数の上
includeされたヘッダファイルに定義されている可能性があるためincludeされた
ファイルに変更されてないことを示すためincludeより下に書く

最新のコンパイラでscanfは危険ですよと言われる場合以下のdefineを書く
#define _CRT_SECURE_NO_WARNINGS 1
*/
