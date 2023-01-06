#include <stdio.h>

int main() {
    float answer,mean, sum = 0, count = 0;
    int test;
    int score[1000] = { 0 };

    scanf_s("%d", &test);
    for (int i = 0; i < test; i++) {
        scanf_s("%d", &score[i]);
        sum += score[i];
    }
    mean = sum / test;
    for (int i = 0; i < test; i++) {
        if (score[i] > mean) {
            count++;
        }
    }
    answer = count / test * 100;
    printf("%0.3f%%", answer);

    return 0;
}