// U008-teilbar_durch_n.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//teilbar durch n
	
	/*
	//for schleife

	for (int a = 1; a < 101; a++)													//fuer i bis 100
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Zahl %d ist durch 3 teilbar.\n", a);
		}

		if (a % 3 != 0 && a % 5 == 0)
		{
			printf("Zahl %d ist durch 5 teilbar.\n",a);
		}

		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("Zahl %d ist durch 3 und 5 teilbar.\n", a);
		}
		
		printf("Zahl %d\n", a);
	
	}

	*/


	//while schleife

	int a = 1;

	while (a < 100)
	{
		if (a % 3 == 0 && a % 5 !=0)
		{
			printf("Zahl %d ist durch 3 teilbar.\n");
		}

		if (a % 3 != 0 && a % 5 == 0)
		{
			printf("Zahl %d ist durch 5 teilbar.\n", a);
		}

		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("Zahl %d ist durch 3 und 5 teilbar.\n", a);
		}

		printf("Zahl %d\n", a);

		a++;
	}

	return 0;
}

