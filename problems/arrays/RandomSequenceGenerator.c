#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBERS 25

int main() {
    int numbers[MAX_NUMBERS];
    int generated_numbers = 0;

    srand(time(NULL)); // Seed the random number generator with current time

    // Initialize the numbers array with values from 1 to 25
    for (int i = 0; i < MAX_NUMBERS; i++) {
        numbers[i] = i + 1;
    }

    // Randomising algorithm: shuffling the nos. using Fisher-Yates algorithm
    for (int i = MAX_NUMBERS - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    // Print the shuffled sequence
    printf("Random sequence of numbers from 1 to 25:\n");
    for (int i = 0; i < MAX_NUMBERS; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}