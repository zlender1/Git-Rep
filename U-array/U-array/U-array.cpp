// U-array.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//In arrays schreiben - immer ueber index [] - beginnt immer mit 0

	int a_zahl[3];			//eindimensional array
	
	a_zahl[0] = 10;			//explizit initializirung
	a_zahl[1] = 20;
	a_zahl[2] = 30;
	
	
	int b_zahl[4] = { 10, 20, 30, 40 };		//implizit deklarirung und initializirung

	//printf("%i\n", b_zahl[2]);


	//array liste ausgeben nur ueber schleife erfolgen wobei laufvariable ueber index

	for (int i = 0; i < 4; i++)
	{
		printf("%i\n", b_zahl[i]);
	}


	//int a = 1;


    return 0;
}

