//Zyanken.cpp :�R���\�[���A�v���P�[�V�����̃G���g���|�C���g���`���܂�
//
#include <stdio.h>
#include <stdlib.h>//rand()����w�b�_

//�����_���֐�
int randum(void){//h�̖��߂Ɗ֐����͂��Ԃ��Ă͂����Ȃ�
	int par;
	par = (rand() % 3 ) + 1;//3�Ŋ����ė]������߂�1��+(0,1,2,3)�Ȃ̂�
	return par;//par��Ԃ�
}

//������������
void gudge(int player, int com){

	/*�����p�^�[�� �����p�^�[��
	player com     player com
	1(��)  2(��)   1(��)  3(��)
	2(��)  3(��)   2(��)  1(��)
	3(��)  1(��)   3(��)  2(��)
	*/
	if((player == 1 || player == 2) && (player == com-1)){
		printf("���Ȃ��̏������[ ���߂łƂ���\n");
	}else if(player == 3 && com == 1){
		printf("���Ȃ��̏������[ ���߂łƂ���\n");
	}else if(player == 1 && com == 3){
		printf("���̏����������Ȃ��̕�������\n");
	}else if((player == 2 || player == 3) && (player == com+1)){
		printf("���̏����������Ȃ��̕�������\n");
	}else if(player == com){
		printf("����������[��");
	}else{
		printf("����̓_������");
	}
}

int main(void) {

	int x;//�f�o�b�N�p
	int myhand, cpuhand;

	printf("����񂯂񂵂悤��!\n");
	printf("������1��[�O�[]2��[���傫]3��[�p�[]����\n");
	printf("���Ⴀ�����񂯂�������...\n");

	scanf("%d" , &myhand);
	//cpuhand = 1;�K�����[

	cpuhand = randum();

	gudge(myhand,cpuhand);

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

	scanf("%d" , &x);//�f�o�b�N�p

return(0);
}