#include <stdio.h>

int main() {
	int sub = 0;
	float point[100]={0}, mean = 0, sum = 0, max = 0;
	scanf_s("%d", &sub);

	for (int i = 0; i < sub; i++) {
		scanf_s("%f", &point[i]);
		if (max < point[i]) max = point[i];
	}
	for (int i = 0; i < sub; i++) {
		point[i] = point[i] / max * 100;
		sum += point[i];
	}
	mean = sum / sub;
	printf("mean %0.2f", mean);

	return 0;
}