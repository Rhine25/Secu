CC = gcc
CFLAGS = -Wall -g

all: caesar_encrypt caesar_decrypt caesar_break subst_encrypt subst_decrypt

caesar_encrypt: caesar_encrypt.c
	$(CC) $(CFLAGS) caesar_encrypt.c -o caesar_encrypt

caesar_decrypt: caesar_decrypt.c
	$(CC) $(CFLAGS) caesar_decrypt.c -o caesar_decrypt

caesar_break: caesar_break.c tabs.c
	$(CC) $(CFLAGS) caesar_break.c tabs.c -o caesar_break

subst_encrypt: subst_encrypt.c tabs.c
	$(CC) $(CFLAGS) subst_encrypt.c tabs.c -o subst_encrypt

subst_decrypt: subst_decrypt.c tabs.c
	$(CC) $(CFLAGS) subst_decrypt.c tabs.c -o subst_decrypt

clean:
	rm -f *.o
mrproper: clean
	rm -f hello
