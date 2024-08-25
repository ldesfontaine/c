#include <stdio.h>
#include "functions.h"

int main() {
    int a = 5, b = 10;

    if (estpair(a)) {
        printf("%d est pair.\n", a);
    } else {
        printf("%d est impair.\n", a);
    }

    printf("Le maximum entre %d et %d est %d.\n", a, b, maxi(a, b));

    printf("Racine: ");
    racine(1, 2, 1);

    printf("Somme des entiers impairs de 1 à 50: %d\n", sommeImpairs());

    printf("Factorielle de 5: %d\n", fact(5));

    printf("Suite d'entiers: ");
    suiteEntiers();

    printf("Table de multiplication: ");
    tableMultiplication();

    printf("afficher Tableau: ");
    int tableau[] = {1, 2, 3, 4, 5};
    afficherTableau(tableau, 5);

    printf("Maximum tableau: %d\n", maximumTableau(tableau, 5));

    printf("Moyenne tableau: %.2f\n", moyenneTableau(tableau, 5));

    printf("Est présent: %d\n", estPresent(tableau, 5, 3));

    printf("Permutation tableau: ");
    permutationTableau(tableau, 5, 1, 3);

    printf("Rotation tableau: ");
    rotationTableau(tableau, 5, 2);

    printf("Inversion tableau: ");
    inversionTableau(tableau, 5);

    printf("Afficher matrice: ");
    int matrice[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    afficherMatrice(matrice, 3, 3);

    printf("Afficher matrice bis: ");
    afficherMatriceBis(matrice, 3, 3);

    printf("Nombre de pairs dans la matrice: %d\n", nbpairsMatrice(matrice, 3, 3));

    printf("Transposee matrice: ");
    afficherTransposeeMatrice(matrice, 3, 3);


    return 0;
}
