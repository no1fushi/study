/*変数は値を代入して計算するもの
 変数を使うには型の宣言をしなければならない
 宣言は一度に複数行うことができる
 変数名や変数の値を決めなければならない
 */
#include <stdio.h>

int main(void){
	int a; //int型でaという変数を宣言
	a = 0; //aに0を代入
	
	printf("aの値は%dです。\n",a);

	int b,c;//一気に宣言もできる

	b = 10;
	c = 7;

	printf("ｃの値は%dbの値は%dです。\n",c,b);

	int d = a+b+c;//一気に指定できる&演算
	printf("dの値は%d\n",d );

	int e = d+10;
	printf("eの値は%d\n",e );

	printf("10/3の答えは%d\n",b/3);//こういう書き方もできる

return 0;
}

/*実行結果"aの値は0です。"と表示され
 cの値は7bの値は10と表示され
 dの値は17と表示され
 eの値は27と表示される。
 10/3は3と表示される※

 ※一般的な計算では10/3は3.333...であるがC言語の除算では左右の項
   が整数であると小数点以下を切り捨て整数になる

intはintegreの略で整数を扱うことのできる"整数型"です
整数型なので少数などを入れるとエラーが出ます
printf関数は変数を混ぜながら文字列を出力できる関数です
%dにあとに書かれた,の後ろの変数の値がはめ込めます

算術演算 -優先度は一般の算数、数学と同じく*\%が高く+-が低い
+ 加算
- 減算
* 乗算
/ 除算
% 剰余

型
-整数グループ-整数を扱うことができる
int         整数型                 コンパイラによって精度が違ったりする
short      単精度整数型        -32768～32767
long       倍精度整数型        -2147483648～2147483647
long long 倍々精度型整数型  -9223372036854775808～9223372036854775807
_Bool      論理整数型           trueかfalseか
---------------------------------------------------------------------------
_complex  複素数型
Imaginary 複素数型
---------------------------------------------------------------------------
-実数グループ-実数(少数)を扱うことができる
float         単精度実数型
double       倍精度実数型
long double 倍々制度実数型

-文字グループ-文字、文字列を扱うことができる
char 文字型

-その他-
unsigned 符号なし 負の数を扱えなくする代わりに正の数の扱える数を
0～元の正の数+減った負の数にできる


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
*/
