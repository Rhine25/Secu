#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tabs.h"

int main(int argc, char *argv[]) {
	if(argc != 2){
		fprintf(stderr,"Need one parameter\n");
		return 1;
	}
	
	//supprimer les doubles dans la clé
	char key[26];
	int j;
	for(j = 0; j<26;j++){
		key[j] = ' ';
	}
	key[0] = argv[1][0];
	
	int length = strlen(argv[1]);
	int indice = 1;
	for(j = 1; j<length; j++){
		if(isintab(argv[1][j],key,indice)<0){
			key[indice] = argv[1][j];
			indice ++;
		}
	}
	
	int alpha;
	for(indice;indice<26;indice++){
		for(alpha = 65; alpha < 91; alpha++){
			if(isintab(alpha,key,26) < 0){
				key[indice] = alpha;
				break;
			}
		}
	}
	
	
	int i;
	unsigned char c;
	while ((i = fgetc(stdin)) != EOF) {
		if(i == ' '){
			c = i;
		}
		else{
			c = (unsigned char) /*trouver la lettre correspondante*/;
		}
		printf("%c", c);
	}
}