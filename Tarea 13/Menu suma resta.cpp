/*Realizar un programa de Operaciones Aritm�ticas (Suma y Resta)

Tenga un men� (suma, resta y salir)

Pida por teclado que opci�n desea 

Y que pueda volver a elegir entre las opciones del men�

Usar do while*/

#include<stdio.h>
#include<math.h>

int main ()
{
	int opcion,a,b,c,d;
	do {
		printf("MENU\n");
		printf("1)Suma\n2)Resta\n3)Salir\n\n");
		printf("Elije una opcion (1-3):  ");
		scanf("%d",&opcion);
		switch (opcion)
		{
			case 1:
				printf("Inserte un numero: ");
				scanf("%d",&a);
				printf("Inserte otro numero: ");
				scanf("%d",&b);
				printf("La suma de estos numero es: %d\n\n",a+b);
			break;
			case 2:
					printf("Inserte un numero: ");
				scanf("%d",&c);
				printf("Inserte otro numero: ");
				scanf("%d",&d);
				printf("La suma de estos numero es: %d\n\n",c-d);
			
		}
	}
	while (opcion<=2);
}
