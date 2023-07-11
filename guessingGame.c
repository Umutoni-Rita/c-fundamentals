#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = rand() % 100 + 1;
  int guess;
  int tries = 0;

  while (guess != number) {
    printf("Guess a number between 1 and 100: ");
    scanf("%d", &guess);
    tries++;

    if (guess < number) {
      printf("Your guess is too low.\n");
    } else if (guess > number) {
      printf("Your guess is too high.\n");
    } else {
      printf("Congratulations, you guessed the number in %d tries!\n", tries);
    }
  }

  return 0;
}
