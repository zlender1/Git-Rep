// U004-umsatzsteuer.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

int main()
{
	int a = 7, b = 19;								//Umasatzsteuer
	float preis, erg;
	char c;

	printf("\t+++++++Auswahl+++++++++");
	printf("\n\n\tL = Lebensmittel");
	printf("\n\tK = Kleidung");

	printf("\n\n\nBitte waehlen Sie L fuer Lebensmittel oder K Kleidung aus:\t");
	scanf("%c", &c);
	printf("Bitte der Preis eintippen:\t");
	scanf("%f", &preis);


	if (c == 'K' || c == 'k')
	{
		erg = (preis * (100 + a)) / 100;
		printf("\n\nSie haben Kleidung auswaehlen. Preis mit Umsatzsteuer ist %.3f.", erg2);
	}
		else if (c == 'L' || c == 'l')
	{
		erg = (preis * (100 + b)) / 100;
		printf("\n\n\nSie haben Lebensmittel auswaehlen. Preis mit Umsatzsteuer ist %.2f.\n", erg1);
	}
	
	printf("\nFalsches Auswahl. Probieren Sie noch mals!!\n");
	    return 0;
}

