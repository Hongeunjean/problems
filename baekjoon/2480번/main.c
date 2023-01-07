#include <stdio.h>

int main() {
	int dice1, dice2, dice3, max;
	scanf_s("%d %d %d", &dice1, &dice2, &dice3);

	if (dice1 == dice2&& dice2 == dice3) printf("%d", 10000 + dice1 * 1000);
	else if (dice1 == dice2 || dice1 == dice3) printf("%d", 1000 + dice1 * 100);
	else if (dice2 == dice3) printf("%d", 1000 + dice2 * 100);
	else if (dice1 != dice3 && dice2 != dice3) {
		max = dice1;
		if (dice2 > dice1 && dice2>dice3) max = dice2;
		if (dice3 > dice1 && dice3>dice2) max = dice3;
		printf("%d", max * 100);
	}

	return 0;
}
