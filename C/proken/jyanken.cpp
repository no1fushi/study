//Zyanken.cpp :�R���\�[���A�v���P�[�V�����̃G���g���|�C���g���`���܂�
//
#include <stdio.h>
#include <stdlib.h>//rand()����w�b�_
#include <time.h>//time����w�b�_

//�����_���֐�
int randum(void){//h�̖��߂Ɗ֐����͂��Ԃ��Ă͂����Ȃ�
	int par;
	srand((unsigned)time(NULL));
	par = (rand() % 3 ) + 1;//3�Ŋ����ė]������߂�1��+(0,1,2,3)�Ȃ̂�
	printf("%d\n" ,par);
	return par;//par��Ԃ�
}

//������������
int gudge(int player, int com){

	/*�����p�^�[�� �����p�^�[��
	player com     player com
	1(��)  2(��)   1(��)  3(��)
	2(��)  3(��)   2(��)  1(��)
	3(��)  1(��)   3(��)  2(��)
	*/
	if((player == 1 || player == 2) && (player == com-1)){
		printf("���Ȃ��̏������[ ���߂łƂ���\n");
		return 1;
	}else if(player == 3 && com == 1){
		printf("���Ȃ��̏������[ ���߂łƂ���\n");
		return 1;
	}else if(player == 1 && com == 3){
		printf("���̏����������Ȃ��̕�������\n");
		return 2;
	}else if((player == 2 || player == 3) && (player == com+1)){
		printf("���̏����������Ȃ��̕�������\n");
		return 2;
	}else if(player == com){
		printf("����������[��");
		return 0;
	}else{
		printf("����̓_������");
		return 0;
	}
}

//
void hand(int somehand){
	switch(somehand){
		case 1: printf("�O�[");
			break;
		case 2: printf("���傫");
			break;
		case 3: printf("�ρ[");
			break;
	}
}

int main(void) {

	int x;//�f�o�b�N�p
	int myhand, cpuhand;
	int mywin,  cpuwin;
	cpuwin = 0;
	mywin = 0;


	printf("����񂯂񂵂悤��!\n");
	printf("������1��[�O�[]2��[���傫]3��[�p�[]����\n");
	while(mywin < 3 && cpuwin < 3){
		printf("���Ⴀ�����񂯂�������...\n");

		scanf("%d" , &myhand);
		//cpuhand = 1;�K�����[

		cpuhand = randum();

		hand(myhand);
		printf("��");
		hand(cpuhand);
		printf("\n");

		x = gudge(myhand,cpuhand);

		switch(x){
		case 1: mywin++;
			break;
		case 2: cpuwin++;
			break;
		}

		printf("%d �� %d\n" , mywin,cpuwin);
	}

	/*���[�����̏ꍇ
	if(myhand == 1){
		printf("����������[��");
	}else if(myhand == 2){
		printf("���̏����������Ȃ��̕�������");
	}else if(myhand == 3){
		printf("���Ȃ��̏������[ ���߂łƂ���");
	}else{
		printf("����̓_������");
	}*/

	if(myhand == 3){
		printf("YOU WIN!");
	}else if(cpuwin == 3){
		printf("YOU LOSET");
	}else{
		printf("ERROR\n");
	}

	scanf("%d" , &x);//�f�o�b�N�p

return(0);
}