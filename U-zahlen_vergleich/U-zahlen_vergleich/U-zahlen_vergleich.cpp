// U-zahlen_vergleich.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"


int main()
{
	//Zahlen vergleich

	int i, j;

	printf("Zahl1:\t");
	scanf("%d", &i);

	printf("Zahl2:\t");
	scanf("%d", &j);


	while (i >= j)
	{
		printf("Zahl noch einmal:\t");
		scanf("%d", &j);
	}

	printf("Thats right.\n");

    return 0;
}

