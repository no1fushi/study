/*リボ払いの計算システム。
支払額が20万円未満なら毎月5000円ずつ、
20万円以上なら毎月10000円ずつ支払う。（手数料別）
リボ手数料は毎月当たりの支払い残高の15％を利用日（買った日または決済日翌日）から決済日までの日数倍して365（閏年は考慮しない）で割った金額。
小数点以下四捨五入。
決済日は毎月26日とする。
利用金額（買い物に使った金額）と利用日（買い物した日）を入力すると、支払回数と手毎月の支払額と手数料、支払総額（手数料込）を表示する。
*/
#include "stdio.h"
#include "math.h"
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)

int input(int i) {

	int r;

	if (i == 0) {
		while (1) {
			puts("支払額を入力してください(円)");
			if (scanf("%d", &r) != 1) {
				scanf("%*s");
				if (feof(stdin)) return 1;
				puts("正しい値を入力してください");
				continue;
			}
			if (r < 0) {
				puts("正しい値を入力してください");
				continue;
			}
			break;
		}
	}
	else if (i == 1) {
		while (1) {
			puts("利用日を入力してくだい(日)");
			if (scanf("%d", &r) != 1) {
				scanf("%*s");
				if (feof(stdin)) return 1;
				puts("正しい値を入力してください");
				continue;
			}
			if (r < 1 || r > 31) {
				puts("正しい値を入力してください");
				continue;
			}
			break;
		}
	}
	return r;
}


int  monPay(int money) {
	int r = 0;

	if (money >= 200000) {
		r = 10000;
	}
	else {
		r = 5000;
	}

	return r;
}

int timeCalc(int money, int mp) {
	int r = 0;
	if (money >= 200000) {
		while (1) {
			money = money - mp;
			r++;
			if (money < 0) {
				r = r - 1;
				break;
			}
		}
	}
	else {
		while (1) {
			money = money - mp;
			r++;
			if (money < 0) {
				r = r - 1;
				break;
			}
		}
	}
	return r;
}

int bala(int m,int mp,int b) {
		b = b - mp;
	return b;
}

int com(int m,int day,int dd,int b) {
	int c;

	if (m == 1) {
		if (day == 26) {
			dd = 29;
		}
		else if (day < 26) {
			dd = 27 - day;
		}
		else {
			dd = (31 - day) + 27;
		}
	}else {
		dd = 31;
	}
	c = (int)round(b * 0.15 * dd / 365);

	return c;
}

int tcom(int m, int c,int trc) {

	if (m == 1) {
		trc = c;
	}else {
		trc = trc + c;
	}

	return trc;
}

int output(int time, int money, int mp, int day) {
	int m,tpay,c;
	int b = money,dd = 0, trc = 0;

	puts("月別残高、手数料");
	for (m = 1; m <= time; m++) {
		c = com(m, day, dd, b);
		b = bala(m,mp,b);
		trc = tcom(m,c,trc);

		puts("ーーーーーーーーーーーーーーーーーーーー");
		printf("%dヶ月目\n", m);
		printf("残高: %d円\n", b);
		printf("手数料: %d円\n", c);
	}

	tpay = trc + money;

	puts("\nーーーーーーーーーーーーーーーーーーーー");
	printf("支払い回数: %d回\n", time);
	printf("決済額: %d円\n", money);
	printf("リボ手数料総額: %d円です\n", trc);
	printf("支払い総額: %d円です\n", tpay);

	return 0;
}

int main() {
	int i, money, day, time, mp;

	for (i = 0; i <= 1; i++) {
		if (i == 0) {
			money = (int)input(i);
		}
		else if (i == 1) {
			day = input(i);
		}
	}

	mp = monPay(money);
	time = timeCalc(money, mp);

	output(time, money, mp, day);
	scanf("%d", &i);
	return 0;
}

