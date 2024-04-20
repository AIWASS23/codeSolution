#include <stdio.h>

int main() {

    int vcor;
    int ecor; 
    int scor; 

    int vfla;
    int efla; 
    int sfla;

    scanf("%d %d %d %d %d %d", &vcor, &ecor, &scor, &vfla, &efla, &sfla);

    if (vcor * 3 + ecor == vfla * 3 + efla) {
        if (scor == sfla) {
            printf("=\n");
        } else if (scor > sfla) {
            printf("C\n");
        } else {
            printf("F\n");
        }
    } else if (vcor * 3 + ecor > vfla * 3 + efla) {
        printf("C\n");
    } else {
        printf("F\n");
    }
    return 0;
}