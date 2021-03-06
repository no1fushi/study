//文字列とは文字型変数の配列。charの配列として宣言される
#include<stdio.h>

int main(void){

	//宣言の方法は通常の配列とたいして変わらない
	char a[]={
			'a' , 'b' , 'c' , '\n'//最後にヌル文字(/n)をつける
	};

	char b[] ="def";//でも可能/nが省かれてるので要素数を入れるときは4になる

	printf("文字列aは%sで文字列bは%sです",a,b);//出力フォーマット指定子は%sを使う

return 0;
}
/*実行結果 文字列aはabcで文字列bはdefですと表示される

文字は'でくくり文字列は"でくくる。改行文字(\n)やヌル文字(/n)を
特殊文字といいプログラム上では1文字の扱いになる
ヌル文字は文字列の終了を表すためヌル文字以降の文字は表示されない
全角文字は漢字、ひらがな・カタカナ、英数字問わず半角文字の倍の長さを使う
 */
