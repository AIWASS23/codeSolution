#include <stdio.h>

int main(){
    int dias;
    int i;
    int valor;
	int soma = 0;

	scanf("%d",&dias);

	for(i = 0; soma < 1000000 && i <= dias; i++) {
		scanf("%d",&valor);
		soma += valor;
	}
	printf("%d",i);
	return 0;
}