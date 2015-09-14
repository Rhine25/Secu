#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	if(argc != 2){
		fprintf(stderr,"Need one parameter\n");
		return 1;
	}
	int i;
	while ((i = fgetc(stdin)) != EOF) {
		unsigned char c = (unsigned char) ((i-atoi(argv[1])-65) % 26) +65;
		printf("%c", c);
	}
}
