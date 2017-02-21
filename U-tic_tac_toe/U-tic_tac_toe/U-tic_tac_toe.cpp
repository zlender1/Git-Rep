// U-tic_tac_toe.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	char matrix[10] = { 1,2,3,4,5,6,7,8,9 };
	int i, j;

	//Zeilenschleife

	for (i = 0; i < 3; i++)
	{
		//spaltenschleife
		for (j = 0; j < 3; j++)
		{
			printf("\t0");
		}
		
		printf("\n");
	}

    return 0;
}

