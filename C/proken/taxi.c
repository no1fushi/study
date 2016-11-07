/*初乗り2㎞まで560円固定、以降130m毎で80円加算、
1km毎に1%ずつ割引率が上昇（最大10％）、
9円以下切り上げの料金設定のタクシーの料金計算システム。
20時～6時は深夜料金2割増（割引や端数切り上げなどの計算後の乗車料金に更に上乗せ。この計算も最後に端数切り上げ）
乗車人数、時間、距離を入力すると、1人当たりの料金と合計料金を返す。
ただし、タクシー1台には4人までしか乗れない。人数が多い時にはタクシー追加。*/

#include "stdio.h"
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)

double input(int i) {
	double a;
	if (i == 0) {
		puts("何人乗る?");
		while(1){
			if (scanf("%lf", &a) != 1) {
			scanf("%*s");
			if (feof(stdin)) return 1;
			puts("正しい値を入力してください");
			continue;
			}
			break;
		}
	}else if (i == 1) {
		puts("目的地まで何キロ?");
		while (1) {
			if (scanf("%lf", &a) != 1) {
				scanf("%*s");
				if (feof(stdin)) return 1;
				puts("正しい値を入力してください");
				continue;
			}
			break;
		}
	}
	else if (i == 2) {
		puts("今何時?(24時間表記で)");
		while (1) {
			if (scanf("%lf", &a) != 1) {
				scanf("%*s");
				if (feof(stdin)) return 1;
				puts("正しい値を入力してください");
				continue;
			}
			if (a > 24) {
				puts("24より大きい数宇の数字が入力されました");
				puts("今何時?(24時間表記で)");
				continue;
			}
			break;
		}
	}
	puts("input ok");
	return a;
}

int roud(int x){
	int swap = x,i;
	while (1) {
		x =  x%10;
		if (x <= 9) {
			i = 10 -x;
			x = swap + i;
			break;
		}
	}
	puts("roud ok");
	return x;
}

int Calc(double dist) {
	int r,i = 0;
	//waribiki
	int a = (int)dist/1;
	double wari = a*0.01;
	if (wari > 0.10) {
		wari = 0.10;
	}

	//Calc main
	double x = dist - 2.0;
	if (dist < 2) {
		r = 560;
	}else{
		while(1){
			x = x - 0.13;
			i++;
			if (x < 0.0){
				r = (560 + (80 * i))*(1-wari);
				break;
			}
		}
	}
	r = roud(r);
	puts("Calc ok");
	return r;
}

int timePlus(int x, int time) {
	int r;

	if (time >= 20 || time < 6) {
		double  l= x * 1.2;
		r =(int)l;
		r = roud(r);
	}
	else {
		r = x;
	}
	puts("timePlus ok");
	return r;
}

int first(int peo) {
	int r = 0;
	if (peo <= 4) {
		r = 1;
	}
	else {
		while (1) {
			peo = peo-4;
			r++;
			if (peo < 4) {
				break;
			}
		}
	}
	puts("first ok");
	return r;
}

int output(int all,int peo) {
	int x;
	printf("合計は%d円\n",all);
	x = all / peo;
	printf("一人あたり%d円",x);
	return 0;
}

int main(void) {
	int i, peo, time,taxi,CalcAns,all;
	double dist;

	//input
	for (i = 0; i <= 2; i++) {
		if (i == 0) {
			peo = (int)input(i);
		}
		else if (i == 1) {
			dist = input(i);
		}
		else if (i == 2) {
			time = (int)input(i);
		}
	}
	//Calc
	CalcAns = Calc(dist);
	//time
	CalcAns = timePlus(CalcAns,time);
	//Taxi num
	taxi = first(peo);
	all = CalcAns*taxi;
	//output
	output(all,peo);
	puts("\n\nSystem all ok");
	return 0;
}