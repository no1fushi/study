// hello.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include <stdio.h>

int main(void)
{
	int x;
	int i;
	int y=1;

	while(y < 2746){//()�̏����̂���{}�̒����J��Ԃ�
		printf("%d\n" , y );
		scanf("%d" , &x);

		y = y * x;
	}
	printf("%d\n" , y);

	/*while(y < 30){
		scanf("%d" , &x);
		if(x>0 && x<10){//()�̏�����{}�����s
			 //(i= 0; i < 20; i++)//i��0�ɂ���<��i+1
			for(i= 0; i < x; i++) {//
				puts("hello world");
				y++;
			}
		}
	}
	
	y++:
	y= y + 1//=�͑��
	==�œ�����
	
	*/

	scanf("%d" , &x);

	return 0;
}
