// U014-spruenge.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//break

	printf("++++++\tBreak\t++++++++\n");

	for (int i = 0; i < 10; i++)
	{
		if (i == 5) { break; }
		printf("%i\n", i);
	}


	//continue

	printf("\n\n++++++\tContinue ++++++++\n");

	for (int i = 0; i < 10; i++)
	{
		if (i == 5) { continue; }
		printf("%i\n", i);
	}



    return 0;
}

