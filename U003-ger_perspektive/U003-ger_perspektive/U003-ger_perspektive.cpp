// U003-ger_perspektive.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{													//pseudo code beispiel - IHK !!!!!
			
	unsigned short alter = 0;						//vorzeichenlos int alter = 0

	
	if (alter < 21 && alter>= 18)					//WENN	
	{
		printf("Heranwachsende.\n");				//printf = ausgabe: "Heran"
	}												//ENDE WENN
	
	if (alter >= 14 && alter < 18)
	{
		printf("Jugentlicher.\n");
	}
	
	if (alter < 14)
	{
		printf("Kind.\n");
	}
	
	if (alter > 21)
	{
		printf("Erwachsende.\n");
	}
	

	//2nd example									//EINGABE:

	if (alter < 21 && alter >= 18)					//WENN (alter < 21 && alter >= 18)
	{
		printf("Heranwachsende.\n");				//AUSGABE: "Heranwachsende."
	}												//ENDE WENN
	
	else if (alter >= 14 && alter < 18)				//DANN WENN
	{
		printf("Jugentlicher.\n");
	}												//ENDE WENN

	else if (alter < 14)
	{
		printf("Kind.\n");
	}
													
	else											//SONST
	
	{
		printf("Erwachsende.\n");
	}												//ENDE WENN




	return 0;
}

