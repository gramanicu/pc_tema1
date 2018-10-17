#include <stdio.h>

struct Serial {
	int cod;
	int episoade;
	int vazute;
};

struct Biblioteca {
	struct Serial s0,s1,s2,s3,s4,s5,s6,s7,s8,s9;
};

struct Biblioteca citeste (int numar_seriale) {
	struct Biblioteca b;
	if(numar_seriale >= 1) scanf("%d%d%d", &b.s0.cod, &b.s0.episoade, &b.s0.vazute);	
	if(numar_seriale >= 2) scanf("%d%d%d", &b.s1.cod, &b.s1.episoade, &b.s1.vazute);	
	if(numar_seriale >= 3) scanf("%d%d%d", &b.s2.cod, &b.s2.episoade, &b.s2.vazute);	
	if(numar_seriale >= 4) scanf("%d%d%d", &b.s3.cod, &b.s3.episoade, &b.s3.vazute);	
	if(numar_seriale >= 5) scanf("%d%d%d", &b.s4.cod, &b.s4.episoade, &b.s4.vazute);	
	if(numar_seriale >= 6) scanf("%d%d%d", &b.s5.cod, &b.s5.episoade, &b.s5.vazute);	
	if(numar_seriale >= 7) scanf("%d%d%d", &b.s6.cod, &b.s6.episoade, &b.s6.vazute);	
	if(numar_seriale >= 8) scanf("%d%d%d", &b.s7.cod, &b.s7.episoade, &b.s7.vazute);	
	if(numar_seriale >= 9) scanf("%d%d%d", &b.s8.cod, &b.s8.episoade, &b.s8.vazute);	
	if(numar_seriale == 10) scanf("%d%d%d", &b.s9.cod, &b.s9.episoade, &b.s9.vazute);
	return b;	
}

void afiseaza (int numar_seriale, struct Biblioteca b) {
        if(numar_seriale >= 1) printf("%d %d %d\n", b.s0.cod, b.s0.episoade, b.s0.vazute);	
	if(numar_seriale >= 2) printf("%d %d %d\n", b.s1.cod, b.s1.episoade, b.s1.vazute);	
	if(numar_seriale >= 3) printf("%d %d %d\n", b.s2.cod, b.s2.episoade, b.s2.vazute);	
	if(numar_seriale >= 4) printf("%d %d %d\n", b.s3.cod, b.s3.episoade, b.s3.vazute);	
	if(numar_seriale >= 5) printf("%d %d %d\n", b.s4.cod, b.s4.episoade, b.s4.vazute);	
	if(numar_seriale >= 6) printf("%d %d %d\n", b.s5.cod, b.s5.episoade, b.s5.vazute);	
	if(numar_seriale >= 7) printf("%d %d %d\n", b.s6.cod, b.s6.episoade, b.s6.vazute);	
	if(numar_seriale >= 8) printf("%d %d %d\n", b.s7.cod, b.s7.episoade, b.s7.vazute);	
	if(numar_seriale >= 9) printf("%d %d %d\n", b.s8.cod, b.s8.episoade, b.s8.vazute);	
	if(numar_seriale == 10) printf("%d %d %d\n", b.s9.cod, b.s9.episoade, b.s9.vazute);
}


struct Biblioteca sorteaza(int n, struct Biblioteca b) {
	int modifica = 1;
	while(modifica) {
		if(n>=1) {  }
	}
}

int main() {
	int numar_seriale;
	
	struct Biblioteca b;

	scanf("%d", &numar_seriale);
	b = citeste(numar_seriale);
	afiseaza(numar_seriale, b);
	
	return 0;
}
