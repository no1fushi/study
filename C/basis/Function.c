//関数は複数の処理をまとめたもの
#include<stdio.h>

float getmax(float a, float b){
	if(a >= b){
		return a;
	}
	else{
		return b;
		/*これは下記のように書くことができこの書き方を三項演算子という
		 返り値 = (条件)? a:b;
		 つまり
		 return = (a>=b)? a :b;

		 */
	}
}

void Hello(void);
/*関数はどこに書いてもいいがmainより下にあるとエラーになる
そのためさきにこんな関数があるよと宣言をしておく。これをプロトタイプ宣言という。*/

int main(void){

	float  result =getmax(2.4 , 8.2);

	printf("%f\n",result);//floatの出力フォーマット指定子は%f

	Hello();

return 0;
}

void Hello(void){//返り値がない場合はvoid
	printf("hello");
}

/*実行結果 8.2が表示されhelloと表示される

floatは単精度実数型なので少数を扱える

関数の書き方
返り値の型 関数名 (引数のかた 引数名{
	処理
return 返り値;
})
*/
