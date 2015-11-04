#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "tabs.h"

int main(int argc, char *argv[]) {
	
	if(argc < 2){
		fprintf(stderr,"Need file location");
		return 1;
	}
	
	int i,j;
	const int NB_ALPHA = 26;
	char chars[NB_ALPHA]; // lettres dans l'ordre d'apparition
	int nb_ap[NB_ALPHA]; // nombre d'apparitions par lettre
	int nb_elem = 0; // compteur de lettres
	
	FILE* fp = fopen(argv[1],"r");
	
	while ((i = fgetc(fp)) != EOF) {
		
		if(i > 64 && i < 91){
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
	fclose(fp);
	
	
	
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
	
	fp = fopen(argv[1],"r");
	
	while ((i = fgetc(fp)) != EOF) {
		
		if(i > 64 && i < 91){
			printf("%c", ((i-key-39)%26)+65);
		}
		else{
			printf("%c", i);
		}
	}
	printf("\n");
	fclose(fp);
	return 0;
}


