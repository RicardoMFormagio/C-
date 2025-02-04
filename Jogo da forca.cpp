#include <stdio.h>
#include <stdlib.h>


void limpatela(){
	system("cls");
}


void menu(){
	int opcao=0;
	
	while (opcao!=1 || opcao!=2 || opcao!=3){
		printf("bem-vindo ao jogo da forca \n\n");
		printf("Escola uma das opcoes abaixo: \n");
		printf(" 1- JOGAR AGORA\n 2- SOBRE O JOGO\n 3- SAIR\n");
		scanf("%d",&opcao);
		
		if (opcao==1){
			printf("jogo iniciado\n");	
		}
		if (opcao==2){
			printf("inforcoes sobre o jogo\n");	
		}
		if (opcao==3){
			printf("obrigado por jogar\n");	
		}
	
	}
}

int main(){
	
	menu();
	
	
	return 0;
	
	
	
	
}
