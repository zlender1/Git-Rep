// mixed_app.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <stdlib.h>
#include "fkinder.h"
#include "fscan.h"
#include "fschaltjahr.h"

int main()
{
		//system("COLOR");
	
	printf("++++++++++++++ Auswahl++++++++++++\n");
	printf("\n\tK = Kindergeburtstag");
	printf("\n\tS = Scanberechnung");
	printf("\n\tC = Schaltjahr");
	printf("\n\nBitte Auswahl treffen: ");

	char a;

	scanf("%c", &a);
	fflush(stdin);

	//a == 115 || a == 83 ? fscan() : (a == 75 || a == 107 ? fkinder() : fschaltjahr());
	
	if (a == 115 || a == 83)

	{
		fscan();
	}

	else if (a == 75 || a == 107)
	
	{
		fkinder();
	}

	printf("Probier noch mals!\n");

	return 0;
	
	
		//Kreditbetrag Rechner	
	
	printf("++++++++++++++++++++++Kreditbetrag Rechner++++++++++++++++++++++++++++\n\n\n");
	
	int b;					//k_betrag
	int n;					//k_laufzeit
	float x;				//j_zinsen
				
	
	printf("Bitte einen Kreditbetrag eingeben:\t\t");
	scanf("%i", &b);

	printf("Bitte die Gesamtlaufzeit in Monaten eingeben:\t");
	scanf("%i", &n);

	printf("Bitte den jaehrlichen Zinsatz eingeben:\t\t");
	scanf("%f", &x);

	double q = 1 + ((x / 100) / 12);	//m zinsen
	
	printf("\n\nIhre Monatliche Belastung ist %.2f.\n", ((b * pow(q, n)) * (q - 1)) / (pow(q, n) - 1));
	
	//printf("%c\n", y);

	
		//Geburtsdatum
	
	int num1, num2, num3;

	printf("\n\nBitte geben Sie ihr Geburtsdatum ein: ");
	scanf("%1d.", &num1);
	scanf("%1d.", &num2);
	scanf("%4d", &num3);
	printf("\n\nIhr Geburtsdatum ist %02d.%02d.%4d\n", num1, num2, num3);

	char m;

	printf("\n\nIhre Wahl: ");
	scanf("%1c",&m);
	printf("\nIhre Auswahl lautet %c\n",m);
	
	
		//Quader Berechnung
	
	printf("+++++++++++Quader Berechnung++++++++++++++++");
	
	float laenge, breite, hoehe, erg;

	printf("\n\nEingabe der Laenge [cm]:\t");
	scanf("%f", &laenge);
	
	printf("Eingabe der Breite [cm]:\t");
	scanf("%f", &breite);

	printf("Eingabe der Hoehe [cm]:\t\t");
	scanf("%f", &hoehe);

	erg = laenge * breite * hoehe;

	printf("\nDas Volume des Quders betraegt %.2f cm.\n", erg);


		//8-bit Dez Zeichencode
	
	unsigned int n = 0;

	printf("Bitte geben Sie eine drei stellig Zahl ein:\t");

	scanf("%3u", &n);

	n = n % 256;					//nur codes bis 256 zulassen

	printf("\nDas Zeichen %c", n);
	printf("Die Dezimalzahl %u\n", n);

	
		//Zeiten umrechnen
	
	unsigned int tag = 0, std = 0, min = 0, sec = 0, eingabe = 0;

	printf("Bitte geben sie eine Anzahl Sekunden ein:");
	scanf("%u", &eingabe);


	sec = eingabe % 60;
	min = eingabe / 60;
	std = min / 60;
	min = min % 60;
	tag = std / 24;
	std = std % 24;
	
	/*
	//Alternative

	sec = eingabe % 60;
	eingabe = eingabe / 60;			//gesamte min
	min = eingabe % 60;				//min 0-59
	eingabe = eingabe / 60;			//std
	std = eingabe % 24;				//stunden 0-23
	tag = eingabe / 24;
	*/

	printf("\n\nTage:\t\t%i"
		"\nStunden:\t%i"
		"\nMinuten:\t%i"
		"\nSekunden:\t%i\n", tag, std, min, sec);

		
		//Brutto-Netto
	
	int brutto;
	float erg = 0;
	float mwst = 0.00;

	printf("Bitte geben Sie einen Brutto Betrag ein ");
	scanf("%i", &brutto);

	printf("Bitte geben Sie einen Umsatzsteuer ein ");
	scanf("%f", &mwst);

	erg = brutto / (1 + mwst);

	printf("\n\nDie Brutto		%i"
			"\nSteuersatz		%f"
			"\nNettobetrag		%.3f\n", brutto, mwst, erg);

	
}