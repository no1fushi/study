#include <stdio.h>


int rem() {
	int a, b, r, x, an;
	puts("割られる数を入力してください");
	scanf("%d", &a);
	puts("割る数を入力してください");
	scanf("%d", &b);

	r = a / b;
	x = r * b;
	an = a - x;
	return an;
}

int even_odd() {
	int a, an, r, x;
	puts("判定する数を入力しなおしてください");
	scanf("%d", &a);

	r = a / 2;
	x = r * 2;
	an = a - x;
	return an;
}

int main(void) {

	int mode, kotae, a, r, x, an, i;
	int b = 0;

	puts("余り(1)奇数偶数判定(2)約数判定(3)");
	puts("()の中の数字を入力してください");
	scanf("%d", &mode);

	switch (mode) {
	case 1:kotae = rem();
		printf("余り%d\n", kotae);
		break;
	case 2:kotae = even_odd();
		if (kotae == 0) {
			puts("偶数です");
		}
		else {
			puts("奇数です");
		}
		break;
	case 3:
		puts("割る数を入力しなおしてください");
		scanf("%d", &a);
		puts("約数は");
		for (i = 1;i<=a;i++) {
			r =a/i;
			x = r * i;
			an = a - x;
			if (an == 0){
				printf("%d\n",i);
			}
		}
		break;
	}

	return 0;
}

