#include<stdio.h>
int main(){
	for(int num=1; num<=20; ++num){
		if(num %2==0){
			printf("El numero %d es par \n", num ); 
		}else{
			printf("El numero %d es impar \n", num); 
		}
	}
	return 0; 
}

