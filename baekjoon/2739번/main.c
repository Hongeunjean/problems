#include <stdio.h>

int main() {
	int stage, number=9;
	scanf_s("%d", &stage);

	for (int i = 1; i <= number; i++) {
		printf("%d * %d = %d\n", stage, i, stage * i);
	}

	return 0;
}