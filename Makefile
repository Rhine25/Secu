CC = gcc
CFLAGS = -Wall -g

all: caesar_encrypt caesar_decrypt caesar_break vigenere_encrypt vigenere_decrypt vigenere_break subst_encrypt subst_decrypt subst_break

caesar_encrypt: caesar_encrypt.c
	$(CC) $(CFLAGS) caesar_encrypt.c -o caesar_encrypt

caesar_decrypt: caesar_decrypt.c
	$(CC) $(CFLAGS) caesar_decrypt.c -o caesar_decrypt

caesar_break: caesar_break.c tabs.c
	$(CC) $(CFLAGS) caesar_break.c tabs.c -o caesar_break
	
vigenere_encrypt: vigenere_encrypt.c
	$(CC) $(CFLAGS) vigenere_encrypt.c -o vigenere_encrypt
	
vigenere_decrypt:
	$(CC) $(CFLAGS) vigenere_decrypt.c -o vigenere_decrypt
	
vigenere_break:
	$(CC) $(CFLAGS) vigenere_break.c tabs.c -o vigenere_break

subst_encrypt: subst_encrypt.c tabs.c
	$(CC) $(CFLAGS) subst_encrypt.c tabs.c -o subst_encrypt

subst_decrypt: subst_decrypt.c tabs.c
	$(CC) $(CFLAGS) subst_decrypt.c tabs.c -o subst_decrypt

subst_break: subst_break.c tabs.c
	$(CC) $(CFLAGS) subst_break.c tabs.c -o subst_break
	
clean:
	rm -f *.o
mrproper: clean
	rm -f hello
