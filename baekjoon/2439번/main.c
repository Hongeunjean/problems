#include <stdio.h>

int main() {
	int count;
	scanf_s("%d", &count);

	for (int i = 1; i <= count; i++) {
		for (int j = count+1; j > i+1; j--) {
			printf(" ");
		}
		for (int j = 1; j < i+1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}