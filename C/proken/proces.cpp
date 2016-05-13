#include <stdio.h>

int plus(){
	int  a, b ,rezult;

	puts("足す数");
	scanf("%d",&a);
	puts("足される数");
	scanf("%d",&b);

	rezult = a + b;

	return rezult;
}

int minus(){

	int a, b,rezult;

	puts("引く数");
	scanf("%d",&a);
	puts("引かれる数");
	scanf("%d",&b);

	rezult = a - b;

	return rezult;
}

int multi(){
	int a, b, i;
	int rezult = 0;

	puts("かける数");
	scanf("%d",&a);
	puts("かけられる数");
	scanf("%d",&b);

	if(b >= 0){
		for(i =0; i<b; i++){rezult += a;}
	}else{
		for(i =0; i>b; i--){rezult -= a;}
	}
	
	return rezult;
}

int div(){
	int a, b;
	int rezult = 0;

	puts("割る数");
	scanf("%d",&a);
	puts("割られる数");
	scanf("%d",&b);

	while(a >= b){
		a -= b;
		rezult++;
	}

	return rezult;

}

int main(void){

	int kotae;
	int mode;

	puts("足し算(1)と引き算(2)掛け算(3)割り算(4)どの計算する?");
	puts("()の中の数字を入力してね!");
	scanf("%d", &mode);

	switch(mode){
	    case 1:kotae = plus();
			break;
	    case 2:kotae = minus();
			break;
		case 3:kotae = multi();
			break;
		case 4:kotae = div();
	}

	printf("答えは%dです",kotae);
	scanf("%d", &kotae);
	

	return 0;
}

