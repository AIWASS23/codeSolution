#include <stdio.h>

#define SIZE 100

int main() {
    int v[SIZE] = {0};
    int n, cont = 0;
    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &n);
        v[n] = 1;
    }
    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &n);
        if (v[n]) {
            cont++;
        }
    }
    
    switch(cont) {
        case 3 :
            printf("terno\n");
            break;
        case 4 :
            printf("quadra\n");
            break;
        case 5 :
            printf("quina\n");
            break;
        case 6 :
            printf("sena\n");
            break;
        default:
            printf("azar\n");
    }
    
    return 0;  
}
