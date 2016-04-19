//Zyanken.cpp :コンソールアプリケーションのエントリポイントを定義します
//
#include <stdio.h>
#include <stdlib.h>//rand()入りヘッダ

//ランダム関数
int randum(void){//hの命令と関数名はかぶってはいけない
	int par;
	par = (rand() % 3 ) + 1;//3で割って余りを求めて1を+(0,1,2,3)なので
	return par;//parを返す
}

//勝ち負け判定
void gudge(int player, int com){

	/*勝ちパターン 負けパターン
	player com     player com
	1(ぐ)  2(ち)   1(ぐ)  3(ぱ)
	2(ち)  3(ぱ)   2(ち)  1(ぐ)
	3(ぱ)  1(ぐ)   3(ぱ)  2(ち)
	*/
	if((player == 1 || player == 2) && (player == com-1)){
		printf("あなたの勝ちいー おめでとう笑\n");
	}else if(player == 3 && com == 1){
		printf("あなたの勝ちいー おめでとう笑\n");
	}else if(player == 1 && com == 3){
		printf("俺の勝ちいいあなたの負けええ\n");
	}else if((player == 2 || player == 3) && (player == com+1)){
		printf("俺の勝ちいいあなたの負けええ\n");
	}else if(player == com){
		printf("あいこだよーん");
	}else{
		printf("ずるはダメだよ");
	}
}

int main(void) {

	int x;//デバック用
	int myhand, cpuhand;

	printf("じゃんけんしようぜ!\n");
	printf("数字の1が[グー]2が[ちょき]3が[パー]だぜ\n");
	printf("じゃあああんけえええん...\n");

	scanf("%d" , &myhand);
	//cpuhand = 1;必ずぐー

	cpuhand = randum();

	gudge(myhand,cpuhand);

	/*ぐーだけの場合
	if(myhand == 1){
		printf("あいこだよーん");
	}else if(myhand == 2){
		printf("俺の勝ちいいあなたの負けええ");
	}else if(myhand == 3){
		printf("あなたの勝ちいー おめでとう笑");
	}else{
		printf("ずるはダメだよ");
	}*/

	scanf("%d" , &x);//デバック用

return(0);
}