/* 
	Capturar en una variable de tipo char de longitud 30, entonces, mostrar por pantalla cuantas vocales y consonantes hay en el texto.
*/
#include <stdio.h>
#include <conio.h>
#include<string.h>
main()
{
	char car[30];
	int cont = 0,cont2 = 0, k = 0;
	printf("Introduce una palabra: ");
	scanf("%s",car);
		while(strlen(car) > k)
		{
			if (car[k]=='A'||car[k]=='E'||car[k]=='I'||car[k]=='O'||car[k]=='U'||car[k]=='a'
			||car[k]=='e'||car[k]=='i'||car[k]=='o'||car[k]=='u')
				cont++;
			else 
				cont2++;
				k++;
		}
	
	printf("\n Hay %d vocales",cont);
	printf("\n Hay %d consonantes",cont2);
	getch();
}
