#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <mbstring.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

char clear(){
	char key = NULL;
	scanf("%c", &key);
	if (key != NULL) {
		system("cls");
		key = NULL;
	}
	return 0;
}


char *eval(char *buf, int count) {
	char *string[102] = { "��","��","��","��","��","a","b","c","d","e","��","��","��","��","��","f","g","h","i","j","��","��","��","��","��","k","l","m","n","o","��","��","��","��","��","p","q","r","s","t","��","��","��","��","��","u","v","w","x","y","��","��","��","��","��","z","?","!","-","/","��","��","��","��","��","","&","","","","��","(","��",")","��","*","#","","","","��","��","��","��","��","1","2","3","4","5","��","��","��","","","6","7","8","9","0","\n" };
	int poke[256], pokee[256];
	char str[256];
	int i = 0, c = 0, z = 0, l;
	int j = 1, len, ret, zen, kou;

	while (strcmp(&buf[i], "\0") != 0) {
		len = mblen(&buf[i], MB_CUR_MAX);
		if (len == 1) {
			z++;
			sprintf(str, "%c", buf[i]);
			for (l = 0; l < 101;l++) {
				ret = strcmp(str, string[l]);
				if (ret == 0) {
					if ((l >= 0) && (l <= 9)) { zen = 1; kou = l + 1; }
					else if ((l >= 10) && (l <= 19)) { zen = 2; kou = l - 10 + 1; }
					else if ((l >= 20) && (l <= 29)) { zen = 3; kou = l - 20 + 1; }
					else if ((l >= 30) && (l <= 39)) { zen = 4; kou = l - 30 + 1; }
					else if ((l >= 40) && (l <= 49)) { zen = 5; kou = l - 40 + 1; }
					else if ((l >= 50) && (l <= 59)) { zen = 6; kou = l - 50 + 1; }
					else if ((l >= 60) && (l <= 69)) { zen = 7; kou = l - 60 + 1; }
					else if ((l >= 70) && (l <= 79)) { zen = 8; kou = l - 70 + 1; }
					else if ((l >= 80) && (l <= 89)) { zen = 9; kou = l - 80 + 1; }
					else if ((l >= 90) && (l <= 99)) { zen = 0; kou = l - 90 + 1; }
					else { puts("�ΏۊO�̕��������͂���܂���"); }
					poke[c] = zen;
					pokee[c] = kou;
					break;
				}else if((ret != 0) && (l >= 101)){break;}
			}
			if(ret != 0){puts("�ΏۊO�̕��������͂���܂���");exit(0);}		
			if (strcmp(&buf[j], "\0") != 0) {
				sprintf(str, "%c", buf[j]);
				for (l = 0; l < 101;l++) {
					ret = strcmp(str, string[l]);
					if (ret == 0) {
						if ((l >= 0) && (l <= 9)) { zen = 1; kou = l + 1; }
						else if ((l >= 10) && (l <= 19)) { zen = 2; kou = l - 10 + 1; }
						else if ((l >= 20) && (l <= 29)) { zen = 3; kou = l - 20 + 1; }
						else if ((l >= 30) && (l <= 39)) { zen = 4; kou = l - 30 + 1; }
						else if ((l >= 40) && (l <= 49)) { zen = 5; kou = l - 40 + 1; }
						else if ((l >= 50) && (l <= 59)) { zen = 6; kou = l - 50 + 1; }
						else if ((l >= 60) && (l <= 69)) { zen = 7; kou = l - 60 + 1; }
						else if ((l >= 70) && (l <= 79)) { zen = 8; kou = l - 70 + 1; }
						else if ((l >= 80) && (l <= 89)) { zen = 9; kou = l - 80 + 1; }
						else if ((l >= 90) && (l <= 99)) { zen = 0; kou = l - 90 + 1; }
						else { puts("�ΏۊO�̕��������͂���܂���"); }
						poke[c + 1] = zen;
						pokee[c + 1] = kou;
						break;
					}else if((ret != 0) && (l >= 101)){break;}
				}
				if(ret != 0){puts("�ΏۊO�̕��������͂���܂���");exit(0);}		
			}
		}
		else {
			sprintf(str, "%c%c", buf[i], buf[j]);
			for (l = 0; l < 101;l++) {
				ret = strcmp(str, string[l]);
				if (ret == 0) {
					if ((l >= 0) && (l <= 9)) { zen = 1; kou = l + 1; }
					else if ((l >= 10) && (l <= 19)) { zen = 2; kou = l - 10 + 1; }
					else if ((l >= 20) && (l <= 29)) { zen = 3; kou = l - 20 + 1; }
					else if ((l >= 30) && (l <= 39)) { zen = 4; kou = l - 30 + 1; }
					else if ((l >= 40) && (l <= 49)) { zen = 5; kou = l - 40 + 1; }
					else if ((l >= 50) && (l <= 59)) { zen = 6; kou = l - 50 + 1; }
					else if ((l >= 60) && (l <= 69)) { zen = 7; kou = l - 60 + 1; }
					else if ((l >= 70) && (l <= 79)) { zen = 8; kou = l - 70 + 1; }
					else if ((l >= 80) && (l <= 89)) { zen = 9; kou = l - 80 + 1; }
					else if ((l >= 90) && (l <= 99)) { zen = 0; kou = l - 90 + 1; }
					else { puts("�ΏۊO�̕��������͂���܂���"); }
					poke[c] = zen;
					pokee[c] = kou;
					break;
				}else if((ret != 0) && (l >= 101)){break;}
			}
			if(ret != 0){puts("�ΏۊO�̕��������͂���܂���");exit(0);}		
		}
		i = i + 2;
		j = j + 2;

		if (z == 0) {
			c++;
		}
		else {
			c = c + 2;
			z = 0;
		}
	}

	printf("�Í���");
	for (i = 0; i < count;i++) {
		if (pokee[i] == 10) { pokee[i] = 0; }
		printf("%d%d ", poke[i], pokee[i]);
	}
	printf("�ł�\n\n");
	return 0;
}

//14����
char *input() {
	int count = 0;
	char buf[29];
	while (1) {
		int     i1;
		size_t length;
		//input
		puts("������14�����ȓ��͈̔͂œ��͂��Ă�������");
		puts("���_,�����_�̂���Ђ炪�ȁA�J�^�J�i�A�����A�啶���̃A���t�@�x�b�g�ȊO");
		puts("�܂蔼�p�p��,�Ђ炪�ȑΉ�");
		if (fgets(buf, sizeof(buf), stdin) == NULL || buf[0] == '\n') {
			puts("�󔒂����͂���܂����B��������͂��Ă��������B");
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
		printf("������:%d\n", count);
		if (count > 14) {
			char key = NULL;
			printf("���͂����������%s/n", buf);
			puts("15�����ȏ���͂��Ă��܂�,������x���s���Ă�������");
			exit(0);
		}
		else {
			printf("���͂����������%s\n", buf);
			break;
		}
	}
	eval(buf, count);
	return 0;
}

int main(void) {
	int i = 0,set;
	while(1){
		puts("�Í���(1),�I���(2)");
		puts("()�̒��̐�������͂��Ă�������(���p)");

		if (scanf("%d", &set) != 1) {
			scanf("%*s");
			if (feof(stdin)) return 1;
			puts("���p��1,2�ȊO�̂��̂����͂���܂���");
			puts("���p��1-2�̐�����͂��Ă�������");
			continue;
		}

		if (set == 1) {
			clear();
			input();
			clear();
		}else if(set == 2){
			exit(0);
		}else{
			puts("1~2�ȊO�̐������͂���܂���");
			puts("1~2�̐�����͂��Ă�������");
			continue;
		}
	}
	return 0;
}
