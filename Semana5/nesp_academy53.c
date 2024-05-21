#include <stdio.h>

int main() {
	int comp1, larg1, comp2, larg2, total1, total2;

	scanf("%d %d %d %d", &comp1, &larg1, &comp2, &larg2);

	total1 = comp1 * larg1;
	total2 = comp2 * larg2;

	if (total1 > total2)
		printf("%d\n", total1);
	else
		printf("%d\n", total2);

	return 0;
}
