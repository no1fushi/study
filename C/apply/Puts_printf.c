//puts関数とprintf関数の違い、使い方
#include <stdio.h>

int main(void){

	puts("C言語プログラミングの");
	puts("勉強");

	printf("C言語プログラミングの");
	printf("勉強");

	printf("C言語プログラミングの\n");
	printf("勉強");

	int a = 2;
	printf("\naは%d\n",a);
	printf("a+2は%d\n",a+2);//こういったこともできる
	printf("1+2は%d\n",1+2);

	return 0;
}

/*実行結果 デフォルトではputs関数は改行して
 表示されprintf関数は改行されない
 aは2,a+2は4,1+2は3と表示される
 しかし\nを入れることによりprintf関数も改行できる
 普通に\を出力したい場合は\\と\を重ねて書く

 またputsは変数の内容が出力できないがprintfはできる

 %d等はVariable.cの出力フォーマット指定子を参照
 */
