// U012-start-end_wert.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//Start - ende wert liste

	int i, j, k;

	printf("Zahl1:\t");
	scanf("%i", &j);

	printf("Zahl2:\t");
	scanf("%i", &k);

	for (i = j; k > i; i++)
	{
		printf("Zahl:\t%i\n", i);
	}

    return 0;
}

