#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int sub = 0;
	float* point, mean = 0, sum = 0, max = 0;
	scanf_s("%d", &sub);
	point = (float*)calloc(sub, sizeof(float));

	for (int i = 0; i < sub; i++) {
		scanf_s("%f", &point[i]);
		if (max < point[i]) max = point[i];
	}
	for (int i = 0; i < sub; i++) {
		point[i] = point[i] / max * 100;
		sum += point[i];
	}
	mean = sum / sub;
	printf("%0.6f", mean);

	free(point);
	return 0;
}