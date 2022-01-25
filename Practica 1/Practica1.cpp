#include <stdio.h>
/*
	Practica 1: Se va a capturar los 3 ángulos de un triangulo, mostrando por pantalla que tipo de triángulo es: 
		Equilatero: Tres ángulos iguales
		Isosceles: Dos ángulos iguales y uno diferente.
		Escaleno: Tres ángulos diferentes.
	Nota: Para que pueda considerarse un triángulo, su suma tiene que ser igual a 180.
*/
main(){
	
	int a1,a2,a3,suma;
		
		printf("Captura el primer angulo: ");
		scanf("%d",&a1);
	
		printf("Captura el segundo angulo: "); 
		scanf("%d",&a2);
	
		printf("Captura el tercer angulo: "); 
		scanf("%d",&a3);
		
		suma=a1+a2+a3;
			if(suma==180){
				if (a1==a2 && a1==a3)
							printf("El triangulo es Equilatero.");
				
				else if(a1==a2 && a1!=a3)
							printf("El triangulo es Isosceles.");
							
				else if(a1==a3 && a1!=a2)
							printf("El triangulo es Isosceles.");
							
				else if(a2==a3 && a2!=a1)
							printf("El triangulo es Isosceles.");
				
				else if (a1!=a2&&a1!=a2&&a2!=a3)
							printf("El triangulo es Escaleno"); 
			}
					else
						printf("Captura otros datos.");
	return 0;
	
}
