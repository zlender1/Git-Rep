// U-volume_rechner.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <math.h>
#include "fvolume.h"
#define PI

//const float pi = 3.141593;


int main()
{
	double hoehe = 0.0, durch_m = 0.0;

	printf("Hoehe der Zylinder in cm:\t");
	scanf("%.2", &hoehe);

	printf("Durchmesser der Zylinder in cm:\t");
	scanf("%.2", &durch_m);

	printf("Volume der Zylender ist %.4f.", fvolume(hoehe, durch_m));
	
    return 0;
}

