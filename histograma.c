#include <stdio.h>
#include <math.h>

void progresO(int prog) {
	for(int i=1;i<=10;i++) {
		if(i<=prog) { printf("* "); }
		else { printf(". "); }
	}
	printf("\n");
}

int main() {
	int cod1,cod2,cod3,cod4,cod5,cod6,cod7,cod8,cod9,cod10;		//codurile serialelor
	int prg1,prg2,prg3,prg4,prg5,prg6,prg7,prg8,prg9,prg10;		//progresul serialului
	int counter = 1, n, change = 1, cod;
	float aux1, aux2;

	scanf("%d", &n); 						//citirea numarului de seriale	
	while(counter<=n) {
		//citirea codurilor si calcularea progresului)
		scanf("%d%f%f", &cod, &aux1, &aux2);
		if(counter==1) { cod1=cod; prg1 = round((aux1/aux2)*10);}             
		else if(counter==2) { cod2=cod; prg2 = round((aux1/aux2)*10); }
		else if(counter==3) { cod3=cod; prg3 = round((aux1/aux2)*10); }
		else if(counter==4) { cod4=cod; prg4 = round((aux1/aux2)*10); }
		else if(counter==5) { cod5=cod; prg5 = round((aux1/aux2)*10); }
		else if(counter==6) { cod6=cod; prg6 = round((aux1/aux2)*10); }
		else if(counter==7) { cod7=cod; prg7 = round((aux1/aux2)*10); }
		else if(counter==8) { cod8=cod; prg8 = round((aux1/aux2)*10); }
		else if(counter==9) { cod9=cod; prg9 = round((aux1/aux2)*10); }
		else if(counter==10) { cod10=cod; prg10 = round((aux1/aux2)*10); }
		counter++;
	}
	
	while(change) { 						//sortarea filmelor
		change = 0;
		if(cod1>cod2 && n<=2) { aux1 = cod1; cod1 = cod2; cod2 = aux1; aux2 = prg1; prg1 = prg2; prg2 = aux2; change = 1;}
		if(cod2>cod3 && n>=3) { aux1 = cod2; cod2 = cod3; cod3 = aux1; aux2 = prg2; prg2 = prg3; prg3 = aux2; change = 1;}
		if(cod3>cod4 && n>=4) { aux1 = cod3; cod3 = cod4; cod4 = aux1; aux2 = prg3; prg3 = prg4; prg4 = aux2; change = 1;}
		if(cod4>cod5 && n>=5) { aux1 = cod4; cod4 = cod5; cod5 = aux1; aux2 = prg4; prg4 = prg5; prg5 = aux2; change = 1;}
		if(cod5>cod6 && n>=6) { aux1 = cod5; cod5 = cod6; cod6 = aux1; aux2 = prg5; prg5 = prg6; prg6 = aux2; change = 1;}
		if(cod6>cod7 && n>=7) { aux1 = cod6; cod6 = cod7; cod7 = aux1; aux2 = prg6; prg6 = prg7; prg7 = aux2; change = 1;}
		if(cod7>cod8 && n>=8) { aux1 = cod7; cod7 = cod8; cod8 = aux1; aux2 = prg7; prg7 = prg8; prg8 = aux2; change = 1;}
		if(cod8>cod9 && n>=9) { aux1 = cod8; cod8 = cod9; cod9 = aux1; aux2 = prg8; prg8 = prg9; prg9 = aux2; change = 1;}
		if(cod9>cod10) { aux1 = cod9; cod9 = cod10; cod10 = aux1; aux2 = prg9; prg9 = prg10; prg10 = aux2; change = 1;}
	}	
		
	//afisarea histogramei orizontale
	
	if(n>=1) { printf("%d ", cod1); progresO(prg1); }
	if(n>=2) { printf("%d ", cod2); progresO(prg2); }
	if(n>=3) { printf("%d ", cod3); progresO(prg3); }
	if(n>=4) { printf("%d ", cod4); progresO(prg4); }
	if(n>=5) { printf("%d ", cod5); progresO(prg5); }
	if(n>=6) { printf("%d ", cod6); progresO(prg6); }
	if(n>=7) { printf("%d ", cod7); progresO(prg7); }
	if(n>=8) { printf("%d ", cod8); progresO(prg8); }
	if(n>=9) { printf("%d ", cod9); progresO(prg9); }
	if(n>=10) { printf("%d ", cod10); progresO(prg10); }
	

	//afisarea histogramei verticale
	printf("\n\n");
	for(int i=1; i<=10; i++) {
		for(int j=1; j<=n; j++) {
			if(j==1) { if(prg1>10-i) { printf("* "); } else { printf(". "); } }
			if(j==2) { if(prg2>10-i) { printf("* "); } else { printf(". "); } }
			if(j==3) { if(prg3>10-i) { printf("* "); } else { printf(". "); } }
			if(j==4) { if(prg4>10-i) { printf("* "); } else { printf(". "); } }
			if(j==5) { if(prg5>10-i) { printf("* "); } else { printf(". "); } }
			if(j==6) { if(prg6>10-i) { printf("* "); } else { printf(". "); } }
			if(j==7) { if(prg7>10-i) { printf("* "); } else { printf(". "); } }
			if(j==8) { if(prg8>10-i) { printf("* "); } else { printf(". "); } }
			if(j==9) { if(prg9>10-i) { printf("* "); } else { printf(". "); } }
			if(j==10) { if(prg10>10-i) { printf("* "); } else { printf(". "); } }
		}	
		printf("\n");
	}
	if(n>=1) printf("%d ", cod1);
	if(n>=2) printf("%d ", cod2);
	if(n>=3) printf("%d ", cod3);
	if(n>=4) printf("%d ", cod4);
	if(n>=5) printf("%d ", cod5);
	if(n>=6) printf("%d ", cod6);
	if(n>=7) printf("%d ", cod7);
	if(n>=8) printf("%d ", cod8);
	if(n>=9) printf("%d ", cod9);
	if(n>=10) printf("%d ", cod10);
	printf("\n");

	return 0;
}
