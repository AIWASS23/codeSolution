#include <stdio.h>

int main() {
	int p, d1, d2, soma;
	scanf("%d", &p);

	if (p == 0) {
		scanf("%d%d", &d1, &d2);
		soma = d1 + d2;
		printf("%d", soma % 2 == 0 ? 0 : 1);

	} else {
		scanf("%d %d", &d1, &d2);
		soma = d1 + d2;
        printf("%d", soma % 2 == 0 ? 1 : 0);
	}
	return 0;
}