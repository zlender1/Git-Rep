// U006-switch.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <string.h>


int main()
{
	//Alternative zu wenn dann sonst - vergleichnes

	float a, b, erg;
	char c;
	char d[40];

	printf("Bitte geben sie die erste Zahl ein:\t");
	scanf("%f", &a);
	
	printf("Bitte geben sie die zweite Zahl ein:\t");
	scanf("%f", &b);

	printf("Bitte geben sie die Art der Berechnung +, -, * und / ein:\t");
	scanf(" %c", &c);

	switch (c)													//nur vergleicheit
	{

	case '+': erg = a + b;										//case = ==
		strcpy(d, "addition");
		break;
	
	case '-': erg = a - b;
		strcpy(d, "subtraktion");
		break;

	case '*': erg = a * b;
		strcpy(d, "multiplikation");
		break;

	case '/': erg = a / b;
		strcpy(d, "division");
		break;

	default: a = 0, b = 0, erg = 0;
		strcpy(d, "Keine gueltige Operation ausgewaehlt!\n");

	}

	printf("\n\nOperation = %s.\tBerechnung von %5.2f %c %5.2f ist %05.2f\n", d, a, c, b, erg);

    return 0;
}

