#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
main()
{
	char car[15];
	int k;
	printf("Introduce una palabra: ");
	scanf("%s",&car);
		k=strlen(car);
		while(k%2==0){
			printf("Captura otra palabra.");
			scanf("%s",&car);
			k=strlen(car);
		}
			printf("%c",car[(int)(floor(k/2))]);
	getch();
}
