// U015-funktionen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>



//funktionen muessen vor main() deklariert werden

//Klasische funktion ohne parameter
/*
int fhilfe(void)
{
	return 0;
}


void fhilfe2(void)
{
	return 0;		//falsch - void
}
*/

int rechne(int a, int b)
{
	//static int p = a + b;
	return (a+b);
}


int main(void)
{
	
	printf("Wert:\t%d\n", rechne(5, 5));
	
	/*
	
	//gueltigkeit der variablen

	int i = 333;

	if (i == 333)
	{
		int i = 111;
		printf("%d\n", i);		//111
	}

	printf("%d\n", i);			//333
	*/









    return 0;
}

