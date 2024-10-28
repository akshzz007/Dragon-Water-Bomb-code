/*PROJECT 2.0
NAME-AKSHRA SINGH 
DIVISION-E
ROLL NUMBER-69
***We are creating a game similar to Rock-Paper-Scissors, but with three different elements: Dragon, Water, and Bomb.

If the user chooses Dragon and the computer chooses Water, the Dragon wins because the Dragon drinks the Water.
If the user chooses Dragon and the computer chooses Bomb, the Bomb wins because the Bomb destroys the Dragon.
If the user chooses Water and the computer chooses Bomb, the Water wins because the Water drowns the Bomb.
The player who wins 3 out of 5 rounds will be declared the ultimate winner.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int playerScore = 0, computerScore = 0;
    
    for (int round = 1; round <= 5; round++) {
        int computer = rand() % 3; // 0->Dragon, 1->Water, 2->Bomb
        int player;
        
    printf("Round %d:Choose 0 for Dragon,1 for Water and 2 for Bomb\n",round);
    scanf("%d", &player);
     printf("computer chose %d\n",computer);
     
      // Determine the winner of the round
        if (player == computer) {
            printf("It's a draw!!\n");
        } else if ((player == 0 && computer == 1) || // Dragon vs Water
                   (player == 1 && computer == 2) || // Water vs Bomb
                   (player == 2 && computer == 0)) { // Bomb vs Dragon
            printf("YOU WIN this round!!\n");
            playerScore++;
        } else {
            printf("COMPUTER WINS this round!!\n");
            computerScore++;
        }

        printf("Current Score: You: %d, Computer: %d\n", playerScore, computerScore);

        // Check if someone has won 3 rounds
        if (playerScore == 3 || computerScore == 3) {
            break; // Exit the loop if someone has won
        }
    }

    // Determine the ultimate winner
    if (playerScore > computerScore) {
        printf("Congratulations! You are the ultimate winner!\n");
    } else if (computerScore > playerScore) {
        printf("Computer is the ultimate winner! Better luck next time.\n");
    } else {
        printf("The game ended in a draw!\n");
    }

    return 0;
}