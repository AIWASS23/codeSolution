#include <stdio.h>
#include <string.h>

#define ALPHABET "abcdefghijklmnopqrstuvwxyz"
#define ALPHABET_SIZE 26

int main() {
    char cipher[ALPHABET_SIZE + 1]; 
    char text[1001]; 
    char message[1001] = ""; 

    fgets(cipher, sizeof(cipher), stdin);
    fgets(text, sizeof(text), stdin);

    int cipher_len = strlen(cipher);
    int text_len = strlen(text);

    for (int i = 0; i < text_len - 1; i++) { 
        char *found = strchr(ALPHABET, text[i]); 
        if (found != NULL) {
            int index = found - ALPHABET; 
            if (index >= 0 && index < cipher_len) { 
                message[i] = cipher[index]; 
            }
        }
    }

    printf("%s\n", message);

    return 0;
}
