#include <stdio.h>

#include "tabs.h"

int isintab(char c, char chars[NBALPHA], int nb){ //returns -1 for not in tab or the indice in the tab
	int i;
	for(i=0;i<nb;i++){
		if(chars[i] == c){
			return i;
		}
	}
	return -1;
}

/*int maxintab(int nbap[NBALPHA], int nb){
	int i;
	int max = 0;
	for(i=0;i<nb;i++){
		if(nbap[i] > max){
			max = nbap[i];
		}
	}
	return max;
}*/

void sort(int nbap[NBALPHA], char chars[NBALPHA], int nb){
	int i,j;
	for(j=0; j<nb; j++){
		//fprintf(stderr,"Boucle n°%d :\n",j);
		for(i=0; i<nb; i++){
			if(nbap[i] < nbap[i+1]){
				int tmp = nbap[i];
				nbap[i] = nbap[i+1];
				nbap[i+1] = tmp;
				
				char temp = chars[i];
				chars[i] = chars[i+1];
				chars[i+1] = temp;

				//fprintf(stderr,"%c %d\n", chars[i], nbap[i]);
				//fprintf(stderr,"%c %d\n", chars[i+1], nbap[i+1]);
			}
		}
	}
}