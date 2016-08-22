/*while文条件繰り返し処理
ある条件が成立する間繰り返し処理を行う*/
#include<stdio.h>

int main(void){

	int num = 1;

	while( num < 10){//num が10未満の時繰り返す
		printf("num=%d",num);
		num ++;
	}

return 0;
}

/*for文同様break;でループを抜け
  continueは途中で最初に戻り繰り返しさせる事ができる
  while(1)にすることにより無限ループを作ることができる
*/
