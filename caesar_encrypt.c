/* Dans le ciphertext, termine par un A qui sort d'on ne sait où */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	if(argc != 2){
		fprintf(stderr,"Need one parameter\n");
		return 1;
	}
	int i;
	unsigned char c;
	while ((i = fgetc(stdin)) != EOF) {
		if(i == ' '){
			c = i;
		}
		else{
			c = (unsigned char) (((i + atoi(argv[1]) - 65) % 26) + 'A');
		}
		printf("%c", c);
	}
}
