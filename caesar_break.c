#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i;
	const int NB_ALPHA = 26;
	char chars[NB_ALPHA];
	int apparitions[NB_ALPHA];
	int j = 0;
	int dans_tab = 0;
	int nb_elem = 0;
	char txt[200];
	int ind = 0;
	while ((i = fgetc(stdin)) != EOF) {
		txt[ind] = i;
	}
	// créer tableau avec lettres du texte et nombre d'apparitions
		/*while(j<nb_elem && dans_tab == 0){
			if(chars[j] == i){ //TODO optimiser la recherche
				dans_tab = 1;
				fprintf(stderr,"%c est present deja",i);
			}
			j ++;
		}
		if(dans_tab == 0){
			chars[nb_elem] = i;
			nb_elem ++;
		}
		
		for(j = 0; j<26; j++){
			printf("%c\n",chars[j]);
		}*/
		for(j = 0; j<200; j++){
			printf("%c\n",txt[j]);
		}
		// chercher la lettre avec le plus grand nombre d'apparitions
		// trouver nombre pour que cette lettre - nombre = E
		// décrypter avec la clé trouvée
}
