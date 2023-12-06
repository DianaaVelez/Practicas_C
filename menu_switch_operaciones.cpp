#include <stdio.h>
// Declaracion de la funcion cuadrado
int cuadrado(int n);
//Empieza el main
int main() {
    int num=0, doble=0, mitad=0, cuad=0;
    char opc=' ';

    do {
        printf("O P C I O N E S\n");
        printf("a) Calcular el doble de un numero entero\n");
        printf("b) Calcular la mitad de un numero entero\n");
        printf("c) Calcular el cuadrado de un numero entero\n");
        printf("d) Salir\n");

        printf("Selecciona una opcion: ");
        scanf(" %c",&opc);

        switch (opc) {
            case 'a':
                printf("Ingresa un numero entero: ");
                scanf("%d", &num);
                doble=num*2;
                printf("El doble del numero es: %d\n\n", doble);
                break;

            case 'b':
                printf("Ingresa un numero entero: ");
                scanf("%d",&num);
                mitad=num/2;
                printf("La mitad del numero es: %d\n\n", mitad);
                break;

            case 'c':
                printf("Ingresa un numero entero: ");
                scanf("%d",&num);
                cuad=cuadrado(num); // llamado de funcion cuadrado
                printf("El cuadrado del numero es: %d\n\n", cuad);
                break;

            case 'd':
                printf("Hasta luego :)\n");
                break;

            default:
                printf("Error, selecciona una opcion valida\n\n");
                break;
        }

    } while (opc!='d');

    return 0;
}

// funcion cuadrado()
int cuadrado(int n) {
    int cuadrado=n*n;
    return cuadrado;
}


