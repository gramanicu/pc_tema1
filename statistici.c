#include <stdio.h>
#include <math.h>
#include <stdlib.h>


float abatereStandard(int n,float s, float sP, float p, float ma) {
	return sqrt((1.0/n) * ( sP - 2*ma*s + n*pow(ma,2)));
}

float mediePatratica (int n, float sP) {
	return sqrt(sP/n);
}

float medieArmonica (int n, float sA) {
	return n/sA;
}

float medieGeometrica (int n, float p) {
	return pow(p,1.0/n);
} 

float medieAritmetica (int n, float s) {
	return s/n;
}

int main() {
	float suma=0, produs=1, sArmonica=0, sumap=0, max, min, mAritmetica,crescator;
	int negativ=0, minCount=1, maxCount=1, crescatorCount=1, maxCrescatorCount=1, n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++) {
		float aux;
		scanf("%f", &aux);
		suma += aux;
		produs *= aux;
		sArmonica += 1.0/aux;
		sumap += pow(aux,2);

		if(aux<0.0) negativ = 1;

		if(i==1) {max=aux; min=aux;}
		else {
			if(aux>=crescator) {
				crescatorCount++;
				if(crescatorCount>maxCrescatorCount) {
					maxCrescatorCount = crescatorCount;
				}
			}
			else crescatorCount=1;	
			
			if(aux>max) { max=aux;}
			else if(aux==max) maxCount++;
			if(aux<min) { min=aux;}
			else if(aux==min) minCount++;
		}		
		crescator=aux;

	}
	
	mAritmetica = medieAritmetica(n, suma);
	printf("%.4f\n", mAritmetica);
	if(!negativ) printf("%.4f\n", medieGeometrica(n,produs));
	else printf("-\n");
	printf("%.4f\n", medieArmonica(n, sArmonica));
	printf("%.4f\n", mediePatratica(n, sumap));
	printf("%.4f\n", abatereStandard(n,suma,sumap,produs,mAritmetica));
	printf("%.4f %d\n", min, minCount);
	printf("%.4f %d\n", max, maxCount);
	printf("%d\n", maxCrescatorCount);

	return 0;
}
