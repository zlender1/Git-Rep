#pragma once


int fkinder(void)

{
	printf("\n\n\t+++++++++++Kindergeburtstag+++++++++++++++++");

	int kinder = 0, eier = 0, rest = 0, erhalten = 0;

	printf("\n\nWillkommen zum Kindergeburtstag.\nBitte geben sie die Anzahl der Kinder ein: ");
	scanf("%i", &kinder);

	printf("\nWie viele Ueberraschungseier hast du? Ich hoffe mehr als Kinder sonst gibt es streit.\n"
		"Bitte Anzahl der Eier eingeben: ");
	scanf("%i", &eier);

	erhalten = eier / kinder;
	rest = eier % kinder;

	printf("\nEs wurden %i Kinder eingeladen und jedes hat %i Ueberaschungseier erhalten \n"
		"Es blieben %i uebrig \n", kinder, erhalten, rest);

	return 0;
}