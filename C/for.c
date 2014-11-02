/*for文ループ
 ある回数を繰り返す回数を基準とした繰り返し */
#include<stdio.h>

int main(void){
	int counter;
//for文での繰り返し処理ではint型の変数1つをカウンターとして使う

	for (counter = 1; counter <= 6 ; counter++){
//counterという変数を1にしてcounterが6になるまで処理を行いcounterの値を1ずつプラスする
		if(counter == 2){
			continue;//counterが2の時1回スキップする
		}
		if(counter == 6){
			break;//ループから抜ける
		}
		printf("for文ループ%d回目の処理\n",counter);//counterが増加しているのを確認
	}

	return 0;
}
/*実行結果 for文ループ0回目の処理と5回表示され
 2回めは飛ばされる
 for(この中は)初期処理、繰り返し条件、繰り返し次の処理を書く
 */
