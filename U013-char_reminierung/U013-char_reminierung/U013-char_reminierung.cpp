// U013-char_reminierung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//n oder x terminierung

	char c;

	printf("Char:\t");
	scanf("%c", &c);

	while (c != 110 && c != 120)
	{
		char d;
		printf("Keep diging, almost there. Char:\t");
		scanf(" %c", &d); 
	}
	
	printf("There, you made it.\n");

	return 0;
}

