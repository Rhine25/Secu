/*
* A program for finding the period of a key used to encrypt a plaintext using a Vigenere scheme.
*
*
* Created By: Asad Zia
*/

#include <stdio.h>
#define BUFF 303

int main(int argc, char *argv[]){
	
	if(argc < 2){
		fprintf(stderr,"Need file location");
		return 1;
	}
	FILE* infile = fopen(argv[1],"r");
	
	unsigned int ch;
	int i, period;
	int num_chars;                 /* The numbers of characters read */
	unsigned char val;              
	unsigned char ctext[BUFF];      /* The buffer which stores the chracters */ 
									
	int freqs[256];
	float score = 0.0f;

	// read in the ciphertext
	while ((i = fgetc(infile)) != EOF) {
		ctext[i] = (unsigned char) ch;
	}

	for (period = 1; period < 14; period++) {
	for (i = 0; i < 256; ++i){
		freqs[i]=0;
	}

	num_chars = 0;

	for (i = 1; i < BUFF; i += period) {
		/* The chracter is read and then the frequency is updated according tot he chracter read */
		val = ctext[i];
		freqs[val]++;
		num_chars++;
	}

	for (i = 0; i < 256; ++i){
			score += (float) freqs[i]*freqs[i]/((float) num_chars*num_chars);
			/* score = \sum_i prob^2(character i),
			where the sum is over all ASCII chars */
	}

	/* Our required period will correspond to the highest score */
	printf("period: %d, score: %f\n", period, score);
	}

	return 0;
}