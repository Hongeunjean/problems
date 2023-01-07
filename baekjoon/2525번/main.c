#include <stdio.h>

int main() {
	int hour=0, minute=0, time=0;
	scanf_s("%d %d", &hour, &minute);
	scanf_s("%d", &time);

	minute += time;
	hour += minute / 60;
	minute %= 60;
	printf("%d %d", hour%24, minute);

	return 0;
}