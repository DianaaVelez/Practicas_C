#include<stdio.h>
#include<conio.h>

int main(){
	int i=0; 
	//areglo
	char nombre[20]; //Tipo de dato | Nombre |Extención
	printf("Escribe tu nombre: \n"); 
	char c=' '; 
	while (c!='\n'){
		c=getchar(); 
		nombre[i]=c; 
		++i; 
	}
	printf("Tu nombre es: "); 
	for(int j=0; j<i; ++j){
		putchar(nombre[j]); 
	}
	getch(); 
	return 0; 
}
