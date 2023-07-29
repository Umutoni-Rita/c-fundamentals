#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    printf("Dice Rolling Simulator\n");

    while (1) {
        printf("Press 'Enter' to roll the dice (q to quit): ");
        char input[10];
        fgets(input, sizeof(input), stdin);

        if (input[0] == 'q' || input[0] == 'Q') {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        int result = roll_dice();
        printf("You rolled a %d!\n", result);
    }

    return 0;
}
