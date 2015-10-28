#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tabs.h"

int main(int argc, char *argv[]) {
	if(argc != 2){
		fprintf(stderr,"Need one parameter\n");
		return 1;
	}
	
	const int LENGTH = 26;
	
	char key[LENGTH];
	int j;
	for(j = 0; j<LENGTH;j++){
		key[j] = ' ';
	}
	
	
	//complète la première partie de la clé à partir du mot
	key[0] = argv[1][0];
	int length = strlen(argv[1]);
	int indice = 1;
	for(j = 1; j<length; j++){
		if(isintab(argv[1][j],key,LENGTH)<0){
			key[indice] = argv[1][j];
			indice ++;
		}
	}
	
	
	//complète la fin de la clé
	int alpha;
	for(j = indice;j<LENGTH;j++){
		for(alpha = 65; alpha < 91; alpha++){
			if(isintab(alpha,key,LENGTH) < 0){
				key[j] = alpha;
				break;
			}
		}
	}
	
	int i;
	unsigned char c;
	while ((i = fgetc(stdin)) != EOF) {
		if(i < 65 || i > 91){
			c = i;
		}
		else{
			c = (unsigned char) key[i-65];
		}
		printf("%c", c);
	}
	return 0;
}