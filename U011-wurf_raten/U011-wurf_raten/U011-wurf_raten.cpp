// U011-wurf_raten.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	//Zufalszahl erzeugen

	int wurf, bnz_zahl, i = 0, j = 1;

	srand(time(NULL));
	wurf = rand();												//1 - 100

	do
	{
		printf("Raten sie eine Zahl zwischen 1 und 6:\t");
		scanf("%i", &bnz_zahl);

		wurf = rand() % 6 + 1;

		printf("\nEs wurde eine %i gewuerfelt. \nDu hast eine %i geraten.\n\n", wurf, bnz_zahl);

		if (wurf == bnz_zahl)
		{
			printf("\n\nDu hast die Zahl %i erraten. Du hast dafuer %i Versuche gebraucht.\n", bnz_zahl, j);
			i++;
		}

		else 
		{
			j++;
		}

	} while (i == 0);


	




    return 0;
}

