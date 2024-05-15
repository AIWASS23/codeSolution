#include <stdio.h>

int main() {

    int numero;
    int soma;
    int menor;
    
    scanf("%d %d", &numero, &soma);
    
    for (int i = 0; i < numero; i++) {
        int temp = 0;
        
        scanf("%d", &temp);
        
        soma += temp;
        
        if (i == 0)
            menor = soma;
        else if (soma < menor)
            menor = soma;
    }
    
    printf("%d\n", menor);
    
    return 0;
}
