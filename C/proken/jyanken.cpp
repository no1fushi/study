//Zyanken.cpp :コンソールアプリケーションのエントリポイントを定義します
//
#include <stdio.h>
#include <stdlib.h>//rand()入りヘッダ
#include <time.h>//time入りヘッダ

//ランダム関数
int randum(void){//hの命令と関数名はかぶってはいけない
	int par;
	srand((unsigned)time(NULL));
	par = (rand() % 3 ) + 1;//3で割って余りを求めて1を+(0,1,2,3)なので
	printf("%d\n" ,par);
	return par;//parを返す
}

//勝ち負け判定
int gudge(int player, int com){

	/*勝ちパターン 負けパターン
	player com     player com
	1(ぐ)  2(ち)   1(ぐ)  3(ぱ)
	2(ち)  3(ぱ)   2(ち)  1(ぐ)
	3(ぱ)  1(ぐ)   3(ぱ)  2(ち)
	*/
	if((player == 1 || player == 2) && (player == com-1)){
		printf("あなたの勝ちいー おめでとう笑\n");
		return 1;
	}else if(player == 3 && com == 1){
		printf("あなたの勝ちいー おめでとう笑\n");
		return 1;
	}else if(player == 1 && com == 3){
		printf("俺の勝ちいいあなたの負けええ\n");
		return 2;
	}else if((player == 2 || player == 3) && (player == com+1)){
		printf("俺の勝ちいいあなたの負けええ\n");
		return 2;
	}else if(player == com){
		printf("あいこだよーん");
		return 0;
	}else{
		printf("ずるはダメだよ");
		return 0;
	}
}

//
void hand(int somehand){
	switch(somehand){
		case 1: printf("グー");
			break;
		case 2: printf("ちょき");
			break;
		case 3: printf("ぱー");
			break;
	}
}

int main(void) {

	int x;//デバック用
	int myhand, cpuhand;
	int mywin,  cpuwin;
	cpuwin = 0;
	mywin = 0;


	printf("じゃんけんしようぜ!\n");
	printf("数字の1が[グー]2が[ちょき]3が[パー]だぜ\n");
	while(mywin < 3 && cpuwin < 3){
		printf("じゃあああんけえええん...\n");

		scanf("%d" , &myhand);
		//cpuhand = 1;必ずぐー

		cpuhand = randum();

		hand(myhand);
		printf("対");
		hand(cpuhand);
		printf("\n");

		x = gudge(myhand,cpuhand);

		switch(x){
		case 1: mywin++;
			break;
		case 2: cpuwin++;
			break;
		}

		printf("%d 対 %d\n" , mywin,cpuwin);
	}

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

	if(myhand == 3){
		printf("YOU WIN!");
	}else if(cpuwin == 3){
		printf("YOU LOSET");
	}else{
		printf("ERROR\n");
	}

	scanf("%d" , &x);//デバック用

return(0);
}