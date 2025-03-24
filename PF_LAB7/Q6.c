// Matchstike game
#include <stdio.h>

int main() {
    int matchsticks = 21, user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: Pick 1, 2, 3, or 4 matchsticks. The one who picks the last stick loses.\n");

    while (matchsticks > 1) {
        // Apki Bari
        printf("\nMatchsticks left: %d\n", matchsticks);
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);

        // Apki bari theek hai ya nahi
        if (user_pick < 1 || user_pick > 4 || user_pick >= matchsticks) {
            printf("Invalid move! Pick between 1 and 4 matchsticks.\n");
            continue;
        }

        // Computer apni bari mein paka karte howe ke remaining matchsticks 5 ke multiple mein hein
        computer_pick = 5 - user_pick;
        matchsticks -= (user_pick + computer_pick);

        printf("Computer picks %d matchsticks.\n", computer_pick);
    }

    // Ap har gai
    printf("\nOnly 1 matchstick left. You are forced to pick it. You lose!\n");
    return 0;
}
