//suma con arreglo y funcion recursiva
#include<stdio.h>
int sumaRecursiva(int [], int); //funcion  

int main(){
	int numeros[]={1,2,3,4,5};    //arreglo ya declarado
	
	int tam = sizeof(numeros)/sizeof(numeros[0]); //obtener tamaño del arreglo
	printf("La suma del arreglo es: %d",sumaRecursiva(numeros, tam-1)); 
	
	return 0; 
}

int sumaRecursiva(int numeros[], int tam){
	if(tam==0){           //caso base 
		return numeros[tam]; 
	}else{                //llamada recursiva o caso general 
		return numeros[tam] + sumaRecursiva(numeros, tam-1); 
	}
	
	
}
