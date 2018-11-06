// Copyright 2018 Grama Nicolae

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


float abatereStandard(int n, float s, float sP, float p, float ma) {
    return sqrt((1.0 / n) * (sP - 2 * ma * s + n * pow(ma, 2)));
}

float mediePatratica(int n, float sP) {
    return sqrt(sP / n);
}

float medieArmonica(int n, float sA) {
    return n / sA;
}

float medieGeometrica(int n, float p) {
    return pow(p, 1.0 / n);
}

float medieAritmetica(int n, float s) {
    return s / n;
}

int main() {
    float suma = 0, produs = 1, sArmonica = 0;
    float sumap = 0, max, min, mAritmetica, crescator;
    int negativ = 0, minCount = 1, maxCount = 1;
    int crescatorCount = 1, maxCrescatorCount = 1, n;
    int i;
    scanf("%d", & n); // se citeste numarul de valori

    for (i = 1; i <= n; i++) {
        float aux; // valorile citite se memoreaza intr-o variabila auxiliara
        scanf("%f", & aux);
        suma += aux; // calculam suma numerelor
        produs *= aux; // calculam produsul numerelor
        sArmonica += 1.0 / aux; // calculam suma inverselor
        sumap += pow(aux, 2); // calculam suma patratelor

        if (aux < 0.0) negativ = 1; // daca este negativ, mg nu are sens

        if (i == 1) {
            max = aux;
            min = aux;
        } else {
            if (aux >= crescator) {
                crescatorCount++;
                if (crescatorCount > maxCrescatorCount) {
                    maxCrescatorCount = crescatorCount;
                }
            } else { crescatorCount = 1; }

            if (aux > max) {
                max = aux;
            } else { if (aux == max) maxCount++; }
            if (aux < min) {
                min = aux;
            } else { if (aux == min) minCount++; }
        }
        crescator = aux;
    }

    // afisarea rezultatelor
    mAritmetica = medieAritmetica(n, suma);
    printf("%.4f\n", mAritmetica);
    if (!negativ) { printf("%.4f\n", medieGeometrica(n, produs));
    } else {
       printf("-\n");
    }
    printf("%.4f\n", medieArmonica(n, sArmonica));
    printf("%.4f\n", mediePatratica(n, sumap));
    printf("%.4f\n", abatereStandard(n, suma, sumap, produs, mAritmetica));
    printf("%.4f %d\n", min, minCount);
    printf("%.4f %d\n", max, maxCount);
    printf("%d\n", maxCrescatorCount);

    return 0;
}
