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
	printf("%5.2f\n",12.342 );//表示桁指定
	printf("%02d\n",1 );//0詰め
	printf("%+d\n",1234 );//符号付き

	return 0;
}

/*実行結果 デフォルトではputs関数は改行して
 表示されprintf関数は改行されない
 aは2,a+2は4,1+2は3と表示される
 12.34と表示される,01と表示される,+1234と表示される
 しかし\nを入れることによりprintf関数も改行できる
 普通に\を出力したい場合は\\と\を重ねて書く

 またputsは変数の内容が出力できないがprintfはできる

出力フォーマット指定子-printfなどで出力するときの指定子-
%c  文字を出力する                           char
%s  文字列を出力する                        char
%d  整数を10進で出力する                   int,short
%u  符号なし整数を10進で出力する         unsigned int&short
%o  整数を8進で出力する                     int,short,unsignedint&short
%x  整数を16進で出力する                   int,short,unsignedint&short
%f  実数を出力する                            float
%e  実数を指数表示で出力する             float
%g  実数を最適な形式で出力する           float
%ld 倍精度整数を10進で出力する           long
%lu 符号なし倍精度整数を10進で出力する unsignedlong
%lo 倍精度整数を8進で出力する             long,unsignedlong
%lx 倍精度整数を16進で出力する           long,unsignedlong
%lf 倍精度実数を出力する                    double

出力フォーマット指定子の桁数
%全体の桁数.小数点以下の桁数指定子で桁数を設定することができる
どちらか片方でも可能、指定しない場合はデフォルトが適用される
全体の桁数の前に0を書くことで0詰めすることができる
デフォルトではプラス記号がつかないので付けたければ桁数の前に+をつける
 */
