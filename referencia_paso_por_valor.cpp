#include<stdio.h>

void cocYResto(float num1, float num2, float *coc, float *res){
	
	*coc = num1 / num2; 
	*res = num2 * num2; 
}


int main(){
	
	float a = 15, b=2, coc, res; 
	
	cocYResto(a,b, &coc, &res); 
	printf("%f, %f", coc, res); 
	
	return 0; 
}
