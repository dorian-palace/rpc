#include <stdio.h>
#include <stdlib.h>

int main()
{

    int usermove, comptmove;
    int userLife = 3;
    int comptLife = 3;

    printf("\n*****************************\t PIERRE FEUILLE CISEAUX \t*****************************\n");

    while(userLife != 0 && comptLife != 0){
        printf("Points de vie du joueur %d\t Points de vie de l'ordinateur %d\n", userLife, comptLife);
        printf("\n Entrer votre choix:\t 0 pour Pierre\t 1 pour feuille\t 2 pour ciseaux\t 9 pour quitter : ");
        scanf("%d", &usermove);

        comptmove = rand() % 3;

        if(usermove == 9){
            exit(1);
        }
        else if (usermove == 0 && comptmove == 1){
            userLife--;
            printf("\n L'ordinateur à gagner\t La feuille bat la pierre\n");
        }
        else if (usermove == 0 && comptmove == 2){
            comptLife--;
            printf("\n Vous avez gagner\t La pierre bat le ciseaux\n");
        }
        else if (usermove == 1 && comptmove == 0){
            comptLife--;
            printf("\n Vous avez gagner\t La feuille bat la pierre\n");
        }
        else if (usermove == 2 && comptmove == 0){
            userLife--;
            printf("\n L'ordinateur à gagner\t La pierre bat le ciseaux\n");
        }
        else{
            printf("Égalité\n");
        }
        if(userLife == 0){
            printf("Vous avez perdu la partie\n");
        } 
        else if (comptLife == 0){
            printf("Félicitations vous avez gagner la partie ! \n");
        }
    }

    return 0;
}