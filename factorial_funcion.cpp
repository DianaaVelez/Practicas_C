#include<stdio.h>
void calcularFactorial(int); //funcion

//funcion principal 
int main(){
	int num; 
	printf("Escribe un numero entero: "); 
	scanf("%d", &num); 
	
	calcularFactorial(num); 
      

return 0; 
}
void calcularFactorial(int numero) {
    int total=1;
    for (int i=1;i<=numero;i++) {
        total*=i;
    }
    printf("%d", total);
}

