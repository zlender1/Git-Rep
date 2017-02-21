#pragma once

int fscan()
{
printf("\n\n\t+++++++++++DATEIGROESSE+++++++++++++++++");

int dpi = 0, farbtiefe = 0;
float breite = 0, hoehe = 0;
double groesse = 0.00;

printf("\n\nBitte geben sie die DPI ein: ");
scanf("%i", &dpi);

printf("Bitte geben sie die Farbtiefe ein: ");
scanf("%i", &farbtiefe);

printf("Bitte geben sie die Breite in cm ein: ");
scanf("%f", &breite);

printf("Bitte geben sie die Hoehe in cm ein: ");
scanf("%f", &hoehe);

//Bit calculation
groesse = ((((breite*dpi) / 2.54) * ((hoehe*dpi) / 2.54)) * farbtiefe) / 8 / 1024 / 1024;

printf("\n\nDie zu erwartende Dateigroesse entspricht %.4f MiB\n", groesse);

return 0;

}