// U013-char_reminierung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//n oder x terminierung

	char c = 0;
	
	printf("Char:\t");
	scanf("%c", &c);

	while (c != 110 && c != 120)
	{
		printf("Keep diging, almost there. Char:\t");
		scanf(" %c", &c);
	}

	printf("There, you made it.\n");
	
	
	for (printf("Keep diging, almost there! Char:\t"); (c != 110 && c !=120); )
	{
		scanf(" %c", &c);
	}
	
	printf("There, you made it.\n");
	
	
	return 0;

	
}

