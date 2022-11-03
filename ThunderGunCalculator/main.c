#include <stdio.h>
#include <stdlib.h>

int main()
{

    do
    {
        printf("\nWelcome to the ThunderGun Calculator\n");
        printf("\nHow many players are playing in your game? [Between 1 and 4]: ");

        const float fulltg = 42;
        const float tgshot = 24;

        int players;
        int round;

        scanf("%d", &players);

        if (players >= 1 && players <= 4 && !isdigit(players)){

            printf("\nThis Program is now working for %d players.\n", players);

            printf("\nWhat round do you want to calculate?: ");

            scanf("%d", &round);

            int zombxround;

            if (players == 1){
                zombxround = 24 + (3 * ((round / 5) * (round * 0.15))) + 1;
            }
            else {
                zombxround = 24 + ((players - 1) * 6) * ((round / 5) * (round * 0.15)) + 1;
            }

            float shots;

            shots = zombxround / tgshot;

            printf("\nThe round %d has %d zombies, that means that's %.3f ThunderGun Shots.\n", round, zombxround, shots);

            printf("\nDo you want to translate the ThunderGun shots into how many Thunderguns that is? [Y/N] (Y is 1, N is 2): ");

            int ans;

            scanf("%d", &ans);

            switch (ans)
            {
            case 1:
                printf("\nYou need %.3f ThunderGuns to pass this round\n", shots / fulltg);
                printf("========================================================\n========================================================\n");
                break;

            case 2:
                printf("========================================================\n========================================================\n");
                break;

            default:
                printf("\nThat's not a valid answer\n");
                printf("========================================================\n========================================================\n");
                break;
            }
        }
        else {
            printf("\nYou must introduce a number between 1 and 4\n");
        }

        fflush(stdin);

    } while (main());
}
