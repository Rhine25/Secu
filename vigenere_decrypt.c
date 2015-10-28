#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if(argc != 2){
		fprintf(stderr,"Need one parameter\n");
		return 1;
	}
	
	size_t keySize = strlen(argv[1]);
	int j = 0;
	
	int i;
	unsigned char c;
	while ((i = fgetc(stdin)) != EOF) {
		if(i == ' '){
			c = i;
		}
		else{
			c = (unsigned char) (((26+(i - (argv[1][j%keySize]))) % 26) + 'A');
			j++;
		}
		printf("%c", c);
	}
	printf("\n");
	return 0;
}
