#include <stdio.h>
main()
{
	int a=0, b=0, c=0,i=0;
	int edad[10];
	int y=0;
	int prom;
	for(int x=0;x<10;x++) 
	{	printf("Edad %d: ",x+1);
		scanf("%d",&edad[x]);
		y+=edad[x]; 
	}
	prom=y/10;
	printf("El promedio: %d \n",prom);
	for(int i=0;i<10;i++)
	{	if (edad[i]<prom) 
			a++;
				
		else if (edad[i]>prom)
			b++;
				
		else
			c++;
	}
	printf("\nLas Calificaciones menores al promedio son: %d",a);
	printf("\nLas Calificaciones mayores al promedio son: %d",b);
	printf("\nLas Calificaciones iguales al promedio son: %d",c);
}

