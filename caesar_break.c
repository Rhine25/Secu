#include <stdio.h>
#include <stdlib.h>

int isintab(char c, char chars[26], int nb){ //returns -1 for not in tab or the indice in the tab
	int i;
	for(i=0;i<nb;i++){
		if(chars[i] == c){
			return i;
		}
	}
	return -1;
}

int main(int argc, char *argv[]) {
	int i,j;
	const int NB_ALPHA = 26;
	char chars[NB_ALPHA];
	int nb_ap[NB_ALPHA];
	int nb_elem = 0;
	while ((i = fgetc(stdin)) != EOF) {
		int indice = isintab(i, chars, nb_elem);
		if(indice >= 0){
			nb_ap[indice] ++;
		}
		else{
			chars[nb_elem] = i;
			nb_ap[indice] = 1;
			nb_elem++;
		}
	}
	for(j = 0;j<40;j++){
		printf("'%c' ",chars[j]);
		printf("%d\n",nb_ap[j]);
	}
		
		// chercher la lettre avec le plus grand nombre d'apparitions
		// trouver nombre pour que cette lettre - nombre = E
		// décrypter avec la clé trouvée
}


