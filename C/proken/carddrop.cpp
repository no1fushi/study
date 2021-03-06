/*プレイヤーを2人とした時の、ジジ抜き,ババ抜きの初回配り捨て
カードは54枚のトランプ(13*4 + 1)*/
#define _CRT_SECURE_NO_WARNINGS //scanfは危険です対策
#include <stdio.h> //printf(),puts(),scanf
#include <stdlib.h> //rand(),srand()
#include <time.h> //time()

int main(void) {

	int card[5][13]= {0}; /*[mark(0=Heart,1=Dia,2=Clover,3=Spade,4=場に捨てた状態][num(markが4番地の時0番地以降使わないこととする] 
					   代入値がプレイヤー(0=com.1=user,3=場に捨てた状態)今はとりあえず全部をcomが持ってる状態*/
	int hand[2][28]; //手札をの番地を保存 [mark][num]
	int mark, num;
	int np = 2;//プレイヤーの人数
	int count = 0;//手札の枚数
	int i = 0,j;

	srand((unsigned)time(NULL)); //rand()のシード値に時間を設定

//カードを配る
	while(i < 53 / np){
		mark = rand() % 4; //Jockerを抜きで考える
		num = rand() % 13;

		if(card[mark][num] != 1){//持ってたらやり直し
			card[mark][num] = 1;
			i++;
		}
	}
	card[4][0] = rand() % (np + 1); //Jocker

//今持っている手札を表示&保存
	puts("自分の手札は");
	i = 0;
	for (mark = 0; mark < 4; mark++) {
		for (num = 0; num < 13; num++) {
			if (card[mark][num] == 1){
			//保存
			hand[0][i] = mark;
			hand[1][i] = num;
			i++;
			//表示
				printf("%d,%d (",mark,num);
				switch (mark) {
					case 0: printf("ハートの"); break;
					case 1: printf("ダイヤの"); break;
					case 2: printf("クローバーの"); break;
					case 3: printf("スペードの"); break;
				}
				switch (num) {
					case 0: printf("A)\n"); break;
					case 10: printf("J)\n"); break;
					case 11: printf("Q)\n"); break;
					case 12: printf("K)\n"); break;
					default: printf("%d)\n",num + 1); break;
				}
				count++;
			}
		}
	}
	if(card[4][0] == 1){printf("4,0 (Joker)");count++;}
	printf("合計%d枚",count);

//numのペアが有った場合捨てる
	count = 0;
	for (i = 0; i < 27; i++) {
		for (j = i + 1; j < 27; j++) {
			if (hand[1][i] == hand[1][j] && (hand[1][i] != 1000 || hand[1][j] != 1000 )) {
				card[hand[0][i]][hand[1][i]] = 3;
				card[hand[0][j]][hand[1][j]] = 3;

				//何度も判定されないようにする
				hand[1][i] = 1000;
				hand[1][j] = 1000;
			}
		}
	}

//今持っている手札を表示
	count = 0;
	puts("\n-----------------------------");
	puts("ペアを捨てた後の自分の手札は");
	for (mark = 0; mark < 4; mark++) {
		for (num = 0; num < 13; num++) {
			if (card[mark][num] == 1) {
				printf("%d,%d (", mark, num);
				switch (mark) {
				case 0: printf("ハートの"); break;
				case 1: printf("ダイヤの"); break;
				case 2: printf("クローバーの"); break;
				case 3: printf("スペードの"); break;
				}
				switch (num) {
				case 0: printf("A)\n"); break;
				case 10: printf("J)\n"); break;
				case 11: printf("Q)\n"); break;
				case 12: printf("K)\n"); break;
				default: printf("%d)\n", num + 1); break;
				}
				count++;
			}
		}
	}
	if (card[4][0] == 1) { printf("4,0 (Joker)"); count++; }
	printf("合計%d枚", count);

//場に捨てられてるカードを表示
	count = 0;
	puts("\n-----------------------------");
	puts("場に捨てられてるカードは");
	for (mark = 0; mark < 4; mark++) {
		for (num = 0; num < 13; num++) {
			if (card[mark][num] == 3) {
				printf("%d,%d (", mark, num);
				switch (mark) {
				case 0: printf("ハートの"); break;
				case 1: printf("ダイヤの"); break;
				case 2: printf("クローバーの"); break;
				case 3: printf("スペードの"); break;
				}
				switch (num) {
				case 0: printf("A)\n"); break;
				case 10: printf("J)\n"); break;
				case 11: printf("Q)\n"); break;
				case 12: printf("K)\n"); break;
				default: printf("%d)\n", num + 1); break;
				}
				count++;
			}
		}
	}
	printf("合計%d枚", count);


	return 0;
}
