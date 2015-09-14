#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	char c = ((('Z'+ 1) % 26));
	printf("%c\n",c);
}
