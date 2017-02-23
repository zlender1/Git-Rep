// U-array.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//In arrays schreiben - immer ueber index [] - beginnt immer mit 0
	/*
	int a = 1;
	int a_zahl[3];			//eindimensional array
	
	a_zahl[0] = 10;			//explizit initializirung
	a_zahl[1] = 20;
	a_zahl[2] = 30;
	
	int b_zahl[4] = { 10, 20, 30, 40 };		//implizit deklarirung und initializirung

	printf("%i\n", b_zahl[2]);
	

	//array liste ausgeben nur ueber schleife erfolgen wobei laufvariable als index

	for (int i = 0; i < 4; i++)
	{
		printf("%i\n", b_zahl[i]);
	}


	//in array zu schreiben

	int c_zahl[3] = { 10,20,30 };

	int j = 1;
	for (int i = 0; i < 4; i++)
	{
		c_zahl[i] = j;
		j *= 10;
		printf("%i\n", c_zahl[i]);
	}


	for (int i = 0, j = 1; i < 4; i++)
	{
		c_zahl[i] = j;
		j *= 10;
		printf("%i\n", c_zahl[i]);
	}
	

	//eindimensionale char array

	char str1[5];

	str1[0] = 'H';									//explizit deklarierung
	str1[1] = 'a';
	str1[2] = 'l';
	str1[3] = 'l';
	str1[4] = '\0';

	char str2[5] = { 'H','a','l','l','\0' };		//implizit deklarirung und initializirung

	char str3[] = {"Hallo Welt."};

	printf("%s, %s, %s\n", str1, str2, str3);
	printf("%c\n", str1[4]);
	

	//scanf liest nur bis zum Leerzeichen
	*/

	char str4[100];								//char str4[100] = {' '}

	/*
	scanf("%s", &str4);
	printf("%s\n", str4);
	*/
	/*
	printf("String:\t");
	fgets(str4, 100, stdin);					//bessere variante als scanf
	printf("%s\n", str4);


	//Multidimensionale array

	int e_zahl[4][4] = 
	{											//4 verschiedene bloeke - 4 verschiedene werte pro blok
		{10,20,30,40},
		{50,60,70,80},
		{90,100,110,120},
		{130,140,150,160}
	};

	printf("%i\n", e_zahl[0][0]);				//auslesen der multi array als skalarwert
	*/

	//liste auslesen

	/*

	int e_zahl[4][4] =
	{											//4 verschiedene bloeke - 4 verschiedene werte pro blok
		{ 10,20,30,40 },
		{ 50,60,70,80 },
		{ 90,100,110,120 },
		{ 130,140,150,160 }
	};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3i\t", e_zahl[i][j]);
		}

		printf("\n");
	}

	*/

	//mehrdimensionale arrays mit n Dimensionen > 2

	int f_zahl[2][3][4] = 
	{
		{											
			{10,20,30,40},
			{50,60,70,80},
			{90,100,110,120}
		},
		{
			{130,140,150,160},
			{170,180,190,200},
			{210,220,230,240}
		}
	};

	//scalar auslesen

	//printf("%d", f_zahl[1][1][0]);


	//auslesen liste

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				printf("%3d\t", f_zahl[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}



	return 0;
}

