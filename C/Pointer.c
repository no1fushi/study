//ポインタ(ポインタ変数)-場所(アドレス)を格納(覚えておく)ための変数-
#include<stdio.h>

int main(void){

	int a =10;//4の場所(アドレス)にまとめてaという名前をつけてそこに10を入れている

	int *p;//ポインタ変数宣言 型 *変数名とかく。*を関節演算子という
	p = &a;//aの場所(アドレス)を代入している。&をアドレス演算子という

	printf("aの値は%d\n",a);
	printf("pの値は%d",*p);

return 0;
}
/*実行結果 aの値は10と表示されpの値は10と表示される
 メリット:ポインタは複数の変数に化けるため楽+いろいろ節約になる
 */
