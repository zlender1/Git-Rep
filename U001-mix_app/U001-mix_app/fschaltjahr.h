#pragma once


int fschaltjahr(void)
{
	int jahr;
	int erg;

	printf("\n\nBitte ein Jahr eingeben: ");
	scanf("%i", &jahr);

	erg = jahr % 400 == 0 && (jahr % 100 != 0 || jahr % 4 == 0);

	erg ? printf("Das Jahr %i ist Schaltjahr.\n", jahr) : printf("Das Jahr %i ist nicht Schaltjahr. \n");
	//erg == 1 ? printf("Das Jahr %i ist Schaltjahr.\n", jahr) : printf("Das Jahr %i ist nicht Schaltjahr. \n");

	return 0;

}
