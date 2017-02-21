// U-subnet_rechner.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <math.h>


int main()
{
	
	
	unsigned int okt_1, okt_2, okt_3, okt_4, bnz_maske, bnz_maskebit, anzahl_moegliche_netze, bnz_netze;
	unsigned int neue_bits = 0, bnz_maske_neu;
	
	printf("Basisadresse ohne Host Anteil:\t");
	scanf("%i.%i.%i.%i", &okt_1, &okt_2, &okt_3, &okt_4);

	printf("Subnetmske als Ganzzahl:\t");
	scanf("%i", &bnz_maske);

	bnz_maskebit = (32 - bnz_maske) - 2;
	anzahl_moegliche_netze = pow(2, bnz_maskebit);
	//anzahl_moegliche_netze = 2 << (bnz_maskebit - 1);

	printf("Bei eine Basis Subnetmaske von %i bit, "
		"koennen max %i Netze erstellen"
		"\nund ins jedes Netz mind 2 Rechner beinhalt.\n", bnz_maskebit, anzahl_moegliche_netze);

	printf("\nWieviele Netze wollen Sie Erstellen?\t");
	scanf("%i", &bnz_netze);
	printf("\nSie wollen %i Netze erstellen.\n", bnz_netze);

	while (bnz_netze > pow(2, neue_bits))
	{
		neue_bits++;
	}

	bnz_maske_neu = bnz_maske + neue_bits;

	printf("\nNeue Netzmaske lautet %i bit.\n", bnz_maske_neu);

	


    return 0;
}

