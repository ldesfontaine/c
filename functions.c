#include "functions.h"
#include <stdio.h>
#include <math.h>

int estpair(int a) {
    return (a % 2 == 0) ? 1 : 0;
}


int maxi(int a, int b) {
    return (a > b) ? a : b;
}


int racine(int a, int b, int c) {
    int delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Pas de solution dans R.\n");
        return 0;
    } else if (delta == 0) {
        float x = -b / (2.0 * a);
        printf("Une seule solution: x = %.2f\n", x);
        return 1;
    } else {
        float x1 = (-b - sqrt(delta)) / (2.0 * a);
        float x2 = (-b + sqrt(delta)) / (2.0 * a);
        printf("Deux solutions: x1 = %.2f, x2 = %.2f\n", x1, x2);
        return 1;
    }
}

int sommeImpairs() {
    int somme = 0;
    for (int i = 1; i < 50; i += 2) {
        somme += i;
    }
    return somme;
}


int fact(int n) {
    int resultat = 1;
    while (n > 1) {
        resultat *= n;
        n--;
    }
    return resultat;
}


void suiteEntiers() {
    int somme = 0, nombre;

    while (somme <= 100) {
        printf("Entrez un entier: ");
        scanf("%d", &nombre);
        somme += nombre;
        printf("Somme actuelle: %d\n", somme);
    }
}


void tableMultiplication() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}


void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}


int maximumTableau(int tableau[], int taille) {
    int max = tableau[0];
    for (int i = 1; i < taille; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }
    return max;
}


double moyenneTableau(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return (double)somme / taille;
}


int estPresent(int tableau[], int taille, int element) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == element) {
            return 1;
        }
    }
    return 0;
}


void permutationTableau(int tableau[], int taille, int i, int j) {
    int temp = tableau[i];
    tableau[i] = tableau[j];
    tableau[j] = temp;
    afficherTableau(tableau, taille);
}


void rotationTableau(int tableau[], int taille, int nbrotations) {
    for (int r = 0; r < nbrotations; r++) {
        int dernier = tableau[taille - 1];
        for (int i = taille - 1; i > 0; i--) {
            tableau[i] = tableau[i - 1];
        }
        tableau[0] = dernier;
    }
    afficherTableau(tableau, taille);
}


void inversionTableau(int tableau[], int taille) {
    for (int i = 0; i < taille / 2; i++) {
        int temp = tableau[i];
        tableau[i] = tableau[taille - i - 1];
        tableau[taille - i - 1] = temp;
    }
    afficherTableau(tableau, taille);
}


void afficherMatrice(int matrice[NBLIGNES][NBCOLONNES], int nbligne, int nbcolonne) {
    for (int i = 0; i < nbligne; i++) {
        for (int j = 0; j < nbcolonne; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}


void afficherMatriceBis(int matrice[NBLIGNES][NBCOLONNES], int nbligne, int nbcolonne) {
    for (int i = 0; i < nbligne; i++) {
        afficherTableau(matrice[i], nbcolonne);
    }
}

int nbpairsMatrice(int matrice[NBLIGNES][NBCOLONNES], int nbligne, int nbcolonne) {
    int count = 0;
    for (int i = 0; i < nbligne; i++) {
        for (int j = 0; j < nbcolonne; j++) {
            if (matrice[i][j] % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}


void afficherTransposeeMatrice(int matrice[NBLIGNES][NBCOLONNES], int nbligne, int nbcolonne) {
    for (int i = 0; i < nbcolonne; i++) {
        for (int j = 0; j < nbligne; j++) {
            printf("%d ", matrice[j][i]);
        }
        printf("\n");
    }
}


