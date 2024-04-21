#include <stdio.h>

int main(){

	int casos; 
    int i;
    int contador = 0;
    int numero;
    int base = 2;
    int auxiliar;

	scanf("%d", &casos);

	for(int i = 0; i < casos; i++) {

		scanf("%d", &numero);
		auxiliar = numero;

		while(auxiliar >= base) {

			while(numero != 0){

				if(numero % base == 1 || numero % base == 0){
					numero = numero / base;
					if(numero == 0){
						contador++;
					}
				} else {
					break;
				}
			}
			base++;
			numero = auxiliar;
		}
		printf("%d\n", contador);
		contador = 0;
		base = 2;
	}
    return 0;
}