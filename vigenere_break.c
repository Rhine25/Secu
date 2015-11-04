/* Why does it count an enter at the end ? */

#include <stdio.h>
#include <stdlib.h>

#include "tabs.h"

int main(int argc, char *argv[]) {
	
	if(argc < 2){
		fprintf(stderr,"Need file location");
		return 1;
	}
	FILE* fp = fopen(argv[1],"r");
	
	float frequence_th[26] = {8.4, 1.06, 3.03, 4.18, 17.26, 1.12, 1.27, 0.92, 7.34, 0.31, 0.05, 6.01, 2.96, 7.13, 5.26, 3.01,0.99, 6.55, 8.08, 7.07, 5.74, 1.32, 0.04, 0.45, 0.3, 0.12}
	
	
	/*
	int i,j;
	const int NB_ALPHA = 26;
	char chars[NB_ALPHA]; // lettres dans l'ordre d'apparition
	int nb_ap[NB_ALPHA]; // nombre d'apparitions par lettre
	int nb_elem = 0; // compteur de lettres
	
	while ((i = fgetc(stdin)) != EOF) {
		if(i != ' '){
			int indice = isintab(i, chars, nb_elem);
			if(indice >= 0){
				nb_ap[indice] ++;
			}
			else{
				chars[nb_elem] = i;
				nb_ap[nb_elem] = 1;
				nb_elem++;
			}
		}
	}
	
	int max_nb_ap = 0;
	int indice_max_nb_ap;
	for(j = 0;j<nb_elem;j++){
		printf("'%c' ",chars[j]);
		printf("%d\n",nb_ap[j]);
		if(nb_ap[j] > max_nb_ap){
			max_nb_ap = nb_ap[j];
			indice_max_nb_ap = j;
		}
	}
	printf("Letter most used is : %c\n",chars[indice_max_nb_ap]);
	
	int key = chars[indice_max_nb_ap] - 'E';
	printf("La clé est : %d\n",key);
	*/
	
	// décrypter avec la clé trouvée
	return 0;
}


