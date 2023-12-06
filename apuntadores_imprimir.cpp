//apuntadores, punteros, pointer 
#include<stdio.h>

int main(){
	int num=7; //declaro variable
	int*numPtr; //declaro apuntador 
	numPtr=&num; //los igualo 
	
	printf("Direccion %p \n", &num); 
	printf("Direccion %p \n", numPtr); 
	
	printf("Valor %d \n",num);
	printf("Valor %d \n", *numPtr);
	
	printf("Valor %p \n", &numPtr);
	
	return 0; 
}

