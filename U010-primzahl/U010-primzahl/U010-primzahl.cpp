// U010-primzahl.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

int main()
{
	//primzahl

	int bnz_zahl = 0, i = 0;


	printf("Ganzezahl:\t");
	scanf("%d", &bnz_zahl);
	
	for (i = 2; i <= bnz_zahl/2; i++)
	{
		if (bnz_zahl % i == 0);
		{
			break;
		}
	}
	
	if ((bnz_zahl % i == 0 || bnz_zahl == 1) && bnz_zahl!=2)
	{
		printf("Zahl %d ist keine primzahl.\n");
	}

	else
		{
		printf("Zahl %d ist eine primzahl.\n", bnz_zahl);
		}
	
		return 0;
}

