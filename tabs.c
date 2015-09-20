int isintab(char c, char chars[26], int nb){ //returns -1 for not in tab or the indice in the tab
	int i;
	for(i=0;i<nb;i++){
		if(chars[i] == c){
			return i;
		}
	}
	return -1;
}