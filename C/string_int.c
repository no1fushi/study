#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char str[3];
	char* p;
	int i[3];
	int r,l;

	fgets(str,3,stdin);
	p = strchr(str, '\n');
	if (p != NULL){*p = '\0';}

	i[0] = str[0];
	i[1] = str[1];

	r = i[0] + i[1];

	srand(r);

	for (l = 0;l<3;l++){
		printf("r�̒l��%d\n",r);
		printf("i[0]�̒l��%d\n", i[0]);
		printf("i[1]�̒l��%d\n", i[1]);
		printf("������%d\n", rand());
	}

	return 0;
}

