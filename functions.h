#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define NBLIGNES 3  // ou une autre valeur
#define NBCOLONNES 3  // ou une autre valeur

int estpair(int a);
int maxi(int a, int b);
int racine(int a, int b, int c);
int sommeImpairs();
int fact(int n);
void suiteEntiers();
void tableMultiplication();
void afficherTableau(int tableau[], int taille);
int maximumTableau(int tableau[], int taille);
double moyenneTableau(int tableau[], int taille);
int estPresent(int tableau[], int taille, int element);
void permutationTableau(int tableau[], int taille, int i, int j);
void rotationTableau(int tableau[], int taille, int nbrotations);
void inversionTableau(int tableau[], int taille);
void afficherMatrice(int matrice[][NBCOLONNES], int nbligne, int nbcolonne);
void afficherMatriceBis(int matrice[][NBCOLONNES], int nbligne, int nbcolonne);
int nbpairsMatrice(int matrice[][NBCOLONNES], int nbligne, int nbcolonne);
void afficherTransposeeMatrice(int matrice[][NBCOLONNES], int nbligne, int nbcolonne);

#endif
