#include <stdio.h>
#include <stdlib.h>

int main()
{

    do
    {
        printf("\nWelcome to the ThunderGun Calculator\n");

        printf("\nHow many players are playing in your game?: ");

        int players;

        float tgshot = 24;

        int round;

        scanf("%d", &players);

        if (players == 1)

        {

            printf("\nThis Program is now working for %d players.\n", players);

            printf("\nWhat round do you want to calculate?: ");

            scanf("%d", &round);

            int zombxround;

            zombxround = 24 + (3 * ((round / 5) * (round * 0.15))) + 1;

            float shots;

            shots = zombxround / tgshot;

            printf("\nThe round %d has %d zombies, that means that's %.3f ThunderGun Shots.\n", round, zombxround, shots);

            printf("\nDo you want to translate the ThunderGun shots into how many Thunderguns that is? [Y/N] (Y is 1, N is 2): ");

            int fulltg;

            fulltg = 42;

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

        else if (players <= 4)
        {

            printf("\nThis Program is now working for %d players.\n", players);

            printf("\nWhat round do you want to calculate?: ");

            scanf("%d", &round);

            int zxcoop;

            zxcoop = 24 + ((players - 1) * 6) * ((round / 5) * (round * 0.15)) + 1;

            float shots;

            shots = zxcoop / tgshot;

            printf("\nThe round %d has %d zombies, that means that's %.3f ThunderGun Shots.\n", round, zxcoop, shots);

            printf("\nDo you want to translate the ThunderGun shots into Thunderguns? [Y/N] (Y is 1, N is 2): ");

            float fulltg;

            fulltg = 42;

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
    } while (main());
}
