#include <stdio.h>
#include <stdlib.h>

#include "tabs.h"
//TODO finir décrypter afficher le texte décrypté
int main(int argc, char *argv[]) {
	int i;
	const int NB_ALPHA = 26;
	char chars[NB_ALPHA]; // lettres dans l'ordre d'apparition
	int nb_ap[NB_ALPHA]; // nombre d'apparitions par lettre
	float percentage[NB_ALPHA];
	size_t nb_elem = 0; // compteur de lettres
	size_t textLength = 0;
	
	char texte[500000];
	
	while ((i = fgetc(stdin)) != EOF) {
		texte[textLength] = i;
		textLength ++;
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
	
	//analyse statistique
	
	sort(nb_ap, chars, nb_elem); //chars et nb_ap par ordre d'apparitions décroissant
	
	
	int c;
	for(c = 0; c<nb_elem; c++){
		percentage[c] = ((float)nb_ap[c]*100) / textLength; //on passe le nombre d'apparition en pourcentage
		printf("%c : %f \n",chars[c],percentage[c]);
	}
	
	char decrypt[NB_ALPHA];
	
	char choice;
	//scanf("%c", &choice);
	//choice = 'n';
	printf("scanf '%d'",scanf(" %c",&choice));
	printf("%c\n", choice);
	/*do{
		printf("Manuel ou Automatique ? : ");
		scanf("%1s",&choice);
		//printf("%c\n", choice);
	}while(choice != 'M' && choice != 'A');*/
	
	/*if(percentage[0] <= 16.0f && percentage[0] >= 12.0f){
		decrypt[0] = 'E';
		printf("La lettre avec le plus grand pourcentage d'apparition est décryptée en E\n");
	}
	
	decrypt[1] = 'S';
	decrypt[2] = 'A';
	decrypt[3] = 'I';
	decrypt[4] = 'T';
	decrypt[5] = 'N';
	decrypt[6] = 'R';
	decrypt[7] = 'U';
	decrypt[8] = 'L';
	decrypt[9] = 'O';
	decrypt[10] = 'D';
	decrypt[11] = 'C';
	decrypt[12] = 'P';
	decrypt[13] = 'M';
	decrypt[14] = 'V';
	decrypt[15] = 'Q';
	decrypt[16] = 'F';
	decrypt[17] = 'B';
	decrypt[18] = 'G';
	decrypt[19] = 'H';
	decrypt[20] = 'J';
	decrypt[21] = 'X';
	decrypt[22] = 'Y';
	decrypt[23] = 'Z';
	decrypt[24] = 'W';
	decrypt[25] = 'K';*/
	
	//demander à l'utilisateur de choisir les lettres correspondantes
	
	/*for(c = 0; c < textLength; c++){
		//printf("%d\n", texte[c]);
		if(texte[c] < 64 || texte[c] > 91){
			printf("%c",texte[c]);
		}
		else{
			printf("%c",decrypt[isintab(texte[c], chars, 26)]);
		}
	}*/
	printf("\n");
	return 0;
	
}