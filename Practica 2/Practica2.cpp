
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, opcion, sum1, sum2, resum, res1, res2, resta1, mul1, mul2, resmul, div1, div2, resdiv, resdiv1, resdiv2, res, resulres, bas, exp, expres;

    do
    {
        printf( "\n\n   1. Suma");
        printf( "\n   2. Resta");
        printf( "\n   3. Multiplicacion");
        printf( "\n   4. Division" );
        printf( "\n   5. Division con residuo" );
        printf( "\n   6. Exponienciacion" );
        printf( "\n   7. Salir" );
        printf( "\n\n   Introduzca opcion (1-7): ");

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: printf( "\n   Introduzca el primer numero entero: ");
                    scanf( "%d", &sum1 );
                    printf( "\n   Introduzca el segundo numero entero: ");
                    scanf( "%d", &sum2 );
                    resum = sum1 + sum2;
                    printf( "\n   El resultado es : ");
                    printf("%d",resum);
                    break;

            case 2: printf( "\n   Introduzca el primer numero entero: ");
                    scanf( "%d", &res1 );
                    printf( "\n   Introduzca el segundo numero entero: ");
                    scanf( "%d", &res2 );
                    resum = res1 - res2;
                    printf( "\n   El resultado es : \n");
                    printf("%d",resum);
                    if(res1<0){
                    resum = res1 - res2;
                    resum= abs(resum);
                    printf( "\n   El resultado es : \n");
                    printf("%d",resum);
					}
					if(res2<0){
                    resum = res1 - res2;
                    resum= abs(resum);
                    printf( "\n   El resultado es : \n");
                    printf("%d",resum);
					}
                    break;

            case 3: printf( "\n   Introduzca el primer numero entero: ");
                    scanf( "%d", &mul1 );
                    printf( "\n   Introduzca el segundo numero entero: ");
                    scanf( "%d", &mul2);
                    resmul = mul1 * mul2;
                    printf( "\n   El resultado es : ");
                    printf("%d",resmul);
                    break;
        	case 4: printf( "\n   Introduzca el primer numero entero: ");
                    scanf( "%d", &div1 );
                    printf( "\n   Introduzca el segundo numero entero: ");
                    scanf( "%d", &div2);
                    if(div1>div2){
                    resdiv = div1 / div2;
                    printf( "\n   El resultado es : ");
                    printf("%d",resdiv);}
                    else {
                    resdiv = div2 / div1;
                    printf( "\n   El resultado es : ");
                    printf("%d",resdiv);}
                    break;
            case 5: printf( "\n   Introduzca el primer numero entero: ");
                    scanf( "%d", &resdiv1 );
                    printf( "\n   Introduzca el segundo numero entero: ");
                    scanf( "%d", &resdiv2);
                    if(resdiv1>resdiv2){
                    resulres = resdiv1 / resdiv2;
                    res = resdiv1 % resdiv2;
                    printf( "\n   El resultado es : ");
                    printf("%d",resulres);
                    printf( "\n   El residuo es : ");
                    printf("%d",res);}
                    else {
                    resulres = resdiv2 / resdiv1;
                    res = resdiv2 % resdiv1;
                    printf( "\n   El resultado es : ");
                    printf("%d",resulres);
                    printf( "\n   El residuo es : ");
                    printf("%d",res);
                    }
                    break;
            case 6:	printf( "\n   Introduzca la base: ");
                    scanf( "%d", &bas);
                    printf( "\n   Introduzca el exponente: ");
                    scanf( "%d", &exp);
                    if (bas>exp){
                    expres = pow(bas, exp);
                    printf( "\n   El resultado es: ");
                    printf("%d",expres);}
                    else { expres = pow(exp, bas);
                    printf( "\n   El resultado es: ");
                    printf("%d",expres);}
                    break;
            case 7: break;
            	
         }

         /* Fin del anidamiento */

    } while ( opcion != 7 );

    return 0;
}
