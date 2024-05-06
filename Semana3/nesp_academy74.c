#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
	int n, m;
    int init, restante, minimo, maximo, possibilidades;
	long long int maneiras = 0;
	
	scanf("%d %d", &n, &m);
	
	if( 3 * m < n) {
        printf("0");
        return 0;
    }
    
    
	init = max(1, n - 2 * m);

    for(int i = init; i <= m; i++) {
        restante = n - i;
        minimo = max(1, restante - m);
        maximo = min(restante - 1, m);
        
        possibilidades = maximo - minimo + 1;
        maneiras += possibilidades;
    }
    
    printf("%lld", maneiras);
    return 0;
}