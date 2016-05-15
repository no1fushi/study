#include <stdio.h>
#include <stdlib.h>

int main(void){
	unsigned char str[3];
	int i[3];
	int r,l;

	scanf_s("%[3]s", str);

	i[0] = str[0];
	i[1] = str[1];

	r = i[0] + i[1];

	srand(r);

	for (l = 0;l<3;l++){
		printf("i‚Ì’l%d\n", i);
		printf("—”‚Í%d\n", rand());
	}

	return 0;
}

