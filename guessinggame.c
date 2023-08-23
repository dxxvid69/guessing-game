
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", secretNumber, attempts);
            break;
        }
    }

    return 0;
}
