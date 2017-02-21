// U009-quadrat_zahl.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//quadratzahl

	int i = 1, user_zahl = 0;

	printf("Ganzzhal eingeben:\t");
	scanf("%d", &user_zahl);

	while (i * i < user_zahl)
	{
		i++;
	}
		if (i * i == user_zahl)
		{
			printf("Zahl %d ist Quadratzahl.\n", user_zahl);
		}

		else
		{
			printf("Zahl %d ist nicht Quadratzahl.\n", user_zahl);
		}

    return 0;
}

