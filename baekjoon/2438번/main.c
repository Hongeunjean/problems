#include <stdio.h>

int main() {
	int count = 0;
	char star = '*';
	scanf_s("%d", &count);

	for (int i = 1; i <= count; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}