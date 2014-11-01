//puts関数とprintf関数の違い
#include <stdio.h>

int main(void){

	puts("C言語プログラミングの");
	puts("勉強");

	printf("C言語プログラミングの");
	printf("勉強");

	printf("C言語プログラミングの\n");
	printf("勉強");

	return 0;
}

/*実行結果 デフォルトではputs関数は改行して
 表示されprintf関数は改行されない
 しかし\nを入れることによりprintf関数も改行できる
 普通に\を出力したい場合は\\と\を重ねて書く

 またputsは変数の内容が出力できないがprintfはできる
 */
