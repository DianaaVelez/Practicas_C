#include<stdio.h>
int main(){
	float num1=0, num2=0;
	float suma=0, resta=0;
	int operaciones=0; 
	  
	do{
		printf("O P C I O N E S: \n");
		printf("1. Suma \n"); 
		printf("2. Resta \n"); 
		printf("3. Salir \n"); 
		scanf("%d", &operaciones); 
		
		switch(operaciones){
			case 1: 
					printf("Ingresa el primer numero: \n");
					scanf("%f", &num1); 
					printf("Ingresa el segundo numero: \n"); 
					scanf("%f", &num2); 
					suma=num1+num2; 
					printf ("La suma es: %f \n", suma); 
					break; 
			
			case 2: 
					printf("Ingresa el primer numero: \n");
					scanf("%f", &num1); 
					printf("Ingresa el segundo numero: \n"); 
					scanf("%f", &num2); 
					resta=num1-num2; 
					printf ("La resta es: %f \n", resta ); 
					break;
					
			case 3: 
					printf("Hasta luego :) \n"); 
					break; 
					
			default: 
					printf("Error, selecciona una opcion valida \n"); 
					break; 
		
		}
		
	}while(operaciones!=3);
	
return 0; 
	
}
