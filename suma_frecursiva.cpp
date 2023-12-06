//suma con recursividad 
#include<stdio.h>
int sumaRecursiva(int); //declaramos fRecursiva

int main(){
	int num1, resultado=0; 
	
	printf("Ingrese el primer numero: "); 
	scanf("%d", &num1); 
	
	resultado=sumaRecursiva(num1); 
	
	printf("El resultado de la suma es: %d", resultado); 
	
	
	return 0; 
}

int sumaRecursiva(int n1){
	if(n1==0){
		return 0; 
	}else{
		return n1 + sumaRecursiva(n1-1); 
	}
	
	
}
