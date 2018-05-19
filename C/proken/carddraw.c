#define _CRT_SECURE_NO_WARNINGS //scanfは危険です対策

#include <stdio.h>
#include <stdlib.h> //rand(),srand()
#include <time.h> //time(NULL)

/*コメントに日本語と英語が混在してる..
超ループしててめちゃめちゃ非効率
*/

int main(void) {

	int card[4][13] ={0}; // [0=Hart,1=Spade,2=Klab,3=Dia][A,2,3...10,J,Q,K]
	int mark, num; //[mark][num]
	int com[6], a[6], b[6]; //Players: a[mark][num]*3
	int player = 3; //Number of player
	int tarn = 0;
	int i;

	srand((unsigned)time(NULL));

	while(tarn < 6){ //3回1枚ずつカードを配る
		i = 0;
		while (i < player) {
			switch (i) {
				case 0:
					mark = rand() % 4;
					num = rand() % 14;
					if (card[mark][num] == 1) { //引いたカードがかぶってたら引き直す
						continue;
					} else {
						com[tarn] = mark; //プレイヤーに番地を持たせてどのマークのどのカードをプレイヤーが持ってるかを保存する
						com[tarn+1] = num;
						card[mark][num] = 1;
						i++;
						break;
					}
				case 1:
					mark = rand() % 4;
					num = rand() % 14;
					if (card[mark][num] == 1) {
						continue;
					} else {
						a[tarn] = mark;
						a[tarn + 1] = num;
						card[mark][num] = 1;
						i++;
						break;
					}
				case 2:
					mark = rand() % 4;
					num = rand() % 14;
					if (card[mark][num] == 1) {
						continue;
					} else {
						b[tarn] = mark;
						b[tarn + 1] = num;
						card[mark][num] = 1;
						i++;
						break;
					}
			}
		}
		tarn += 2;
	}

//debug
	int s,d;
	printf("a=");
	for (s = 0; s<6; s++) {
		printf("%d,", a[s]);
	}
	printf("\nb=");
	for (s = 0; s<6;s++) {
		printf("%d,", b[s]);
	}
	printf("\ncom=");
	for (s = 0; s<6; s++) {
		printf("%d,", com[s]);
	}
	printf("\ncard=\n");
	for(s =0;s<4;s++){
		for (d = 0; d<13; d++) {
			printf("%d,", card[s][d]);
		}
		printf("\n");
	}

	return 0;
}