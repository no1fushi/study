﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <mbstring.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

char *eval(char *buf,int count) {
	char *string[102] = { "あ","い","う","え","お","a","b","c","d","e","か","き","く","け","こ","f","g","h","y","j","さ","し","す","せ","そ","k","l","m","n","o","た","ち","つ","て","と","p","q","r","s","t","な","に","ぬ","ね","の","u","v","w","x","y","は","ひ","ふ","へ","ほ","z","?","!","-","/","ま","み","む","め","も","","&","","","","や","(","ゆ",")","よ","*","#","","","","ら","り","る","れ","ろ","1","2","3","4","5","わ","を","ん","","","6","7","8","9","10","\n" };
	int poke[256],pokee[256];
	char str[256];
	int i = 0,c = 0,z = 0,l;
	int j = 1,len,ret,zen,kou;

	while (strcmp(&buf[i], "\0") != 0) {
		len = mblen(&buf[i], MB_CUR_MAX);
		if(len == 1){
			z++;
			sprintf(str, "%c", buf[i]);
			for (l = 0; l < 102;l++) {
				ret = strcmp(str, string[l]);
				if (ret == 0) {
					if ((l >= 0) && (l <= 9)) { zen = 1; kou = l + 1;}
					else if ((l >= 10) && (l <= 19)) { zen = 2; kou = l - 10 + 1; }
					else if ((l >= 20) && (l <= 29)) { zen = 3; kou = l - 20 + 1; }
					else if ((l >= 30) && (l <= 39)) { zen = 4; kou = l - 30 + 1; }
					else if ((l >= 40) && (l <= 49)) { zen = 5; kou = l - 40 + 1; }
					else if ((l >= 50) && (l <= 59)) { zen = 6; kou = l - 50 + 1; }
					else if ((l >= 60) && (l <= 69)) { zen = 7; kou = l - 60 + 1; }
					else if ((l >= 70) && (l <= 79)) { zen = 8; kou = l - 70 + 1; }
					else if ((l >= 80) && (l <= 89)) { zen = 9; kou = l - 80 + 1; }
					else { zen = 0; kou = l - 90; }
					poke[c] = zen;
					pokee[c] = kou;
					break;
				}
			}
			if (strcmp(&buf[j], "\0") != 0){
				sprintf(str, "%c", buf[j]);
				for (l = 0; l < 102;l++) {
					ret = strcmp(str, string[l]);
					if (ret == 0) {
						if ((l >= 0) && (l <= 9)) { zen = 1; kou = l + 1;}
						else if ((l >= 10) && (l <= 19)) { zen = 2; kou = l - 10 + 1;}
						else if ((l >= 20) && (l <= 29)) { zen = 3; kou = l - 20 + 1;}
						else if ((l >= 30) && (l <= 39)) { zen = 4; kou = l - 30 + 1;}
						else if ((l >= 40) && (l <= 49)) { zen = 5; kou = l - 40 + 1;}
						else if ((l >= 50) && (l <= 59)) { zen = 6; kou = l - 50 + 1;}
						else if ((l >= 60) && (l <= 69)) { zen = 7; kou = l - 60 + 1;}
						else if ((l >= 70) && (l <= 79)) { zen = 8; kou = l -70 + 1;}
						else if ((l >= 80) && (l <= 89)) { zen = 9; kou = l - 80 + 1;}
						else { zen = 0; kou = l - 90;}
						poke[c+1] = zen;
						pokee[c+1] = kou;
						break;
					}
				}
			}
		}else{
			sprintf(str,"%c%c", buf[i], buf[j]);
			for (l = 0; l < 102;l++) {
				ret = strcmp(str, string[l]);
				if (ret == 0) {
					if ((l >= 0) && (l <= 9)) { zen = 1; kou = l + 1;}
					else if ((l >= 10) && (l <= 19)) { zen = 2; kou = l - 10 + 1 ; }
					else if ((l >= 20) && (l <= 29)) { zen = 3; kou = l - 20 + 1; }
					else if ((l >= 30) && (l <= 39)) { zen = 4; kou = l - 30 + 1; }
					else if ((l >= 40) && (l <= 49)) { zen = 5; kou = l - 40 + 1; }
					else if ((l >= 50) && (l <= 59)) { zen = 6; kou = l - 50 + 1; }
					else if ((l >= 60) && (l <= 69)) { zen = 7; kou = l - 60 + 1; }
					else if ((l >= 70) && (l <= 79)) { zen = 8; kou = l - 70 + 1; }
					else if ((l >= 80) && (l <= 89)) { zen = 9; kou = l - 80 + 1; }
					else { zen = 0; kou = l - 90; }
					poke[c] = zen;
					pokee[c] = kou;
					break;
				}
			}
		}
		i = i + 2;
		j = j + 2;

		if(z == 0){
			c++;
		}else{
			c =c + 2;
			z = 0;
		}
	}
	
	printf("暗号は");
	for (i = 0; i < count;i++) {
		if(pokee[i] == 10){pokee[i] = 0; }
		printf("%d%d ", poke[i],pokee[i]);
	}
	printf("です\n\n");
	return 0;
}

//14文字
char *input() {
	int count = 0;
	char buf[29];
	char a[29];
	while (1) {
		int     i1;
		size_t length;
		//input
		puts("文字を14文字以内の範囲で入力してください");
		puts("濁点,半濁点のあるひらがな、漢字、大文字のアルファベット以外");
		if (fgets(buf, sizeof(buf), stdin) == NULL || buf[0] == '\n') {
			puts("空白が入力されました。文字を入力してください。");
			continue;
		}
		length = strlen(buf);
		if (buf[length - 1] == '\n') { buf[--length] = '\0'; }
		//count
		for (i1 = 0;;) {
			if (buf[i1] == '\0')break;
			if (_ismbblead(buf[i1])) {
				if (buf[i1 + 1] == '\0') {
					count++;
					break;
				}
				count++;
				i1 += 2;
				continue;
			}
			count++;
			i1++;
		}
		printf("文字数:%d\n", count);
		if (count > 14) {
			printf("入力した文字列は%s/n", buf);
			puts("15文字以上入力しています,もう一度実行してください");
			exit(0);
		}
		else {
			printf("入力した文字列は%s\n", buf);
			break;
		}
	}
	eval(buf,count);
	return 0;
}

int main(void) {
	int i = 0;
	input();
	scanf("%d",i);
	return 0;
}
