//switch分岐-2つ以上の分岐-
#include <stdio.h>

int main(void){

	int text = 1;

	switch(text){

		case 1://それぞれのケースの分岐を書いていく
			puts("はい");
			break;//ここでswitch(case)から抜ける

		case 2:
			puts("いいえ");
			break;

		case 3:
			puts("キャンセル");
			break;

		default://どのケースのも当てはまらなかった場合
			puts("戻る");
			break;
	}

return 0;
}
/*実行結果 はいと表示される
 どのケースにも当てはまらずdefaultが書かれていない場合は実行されない*/
