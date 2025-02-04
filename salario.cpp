#include<stdio.h>

int main(){
	
	float salario_bruto=0,valor_hora=0,valor_hora110=0,valor_hora70=0;
	
	printf("digite seu salario bruto: RS");
	scanf("%f",&salario_bruto);
	
	valor_hora= salario_bruto/220;
	valor_hora110= valor_hora*2.1;
	valor_hora70= valor_hora*1.7;
	
	printf("seu salario por hora e: RS%.2f\n",valor_hora);
	printf("seu salario por hora 70 e: RS%.2f\n",valor_hora70);
	printf("seu salario por hora 110 e: RS%.2f\n",valor_hora110);
	
	return 0;
	
	
	
	
}
