#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float largura, comprimento, precoMetroQuadrado, areaTerreno, precoTerreno;
	int opcao;
	
	printf("Prezado Cliente, obrigado por nos visitar!\n");
	printf("Fa�a aqui a simula��o do valor do seu terreno para venda:\n ");
	
	printf("\nDigite a largura do terreno: ");
	scanf("%f", &largura);
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &comprimento);
	printf("Insira o valor do metro quadrado do terreno: ");
	scanf("%f", &precoMetroQuadrado);
	
	areaTerreno = largura * comprimento;
	precoTerreno = areaTerreno * precoMetroQuadrado;	
	
	printf("\nDetalhamento da Simula��o:\n");
	printf("\nLargura: %.2f metros.\n", largura);
	printf("Comprimento: %.2f metros.\n", comprimento);
	printf("Valor do metro quadrado do terreno R$%.2f.\n", precoMetroQuadrado);
	printf("�rea do terreno: %.2fm�.\n", areaTerreno);
	printf("Pre�o do terreno: R$%.2f.\n", precoTerreno);
	
	
	printf("\nPara anunciar seu terreno conosco digite: 1. \nPara finalizar o programa digite 2:  ");
	scanf("%d", &opcao);	
	switch(opcao){
		case 1:
			printf("\n*** Excelente! ***\n\n Dirija-se � nossa imobili�ria ou\n entre em contato com um dos nossos corretores.\n");
			printf("\nEndere�o: Rua Principal, 423, Centro, Nova Friburgo.\n");
			printf("Contatos: (22)2222-2222 ou (22)99999-0000.\n");
			printf("\nObrigado pela sua prefer�ncia!");
			break;
			
		case 2:
			printf("\n\nOk ent�o!\n Obrigado por nos visitar.\n");
			printf(" Estamos a sua disposi��o para um contato futuro.");
			break;	
			
		default :
			printf("Valor digitado inv�lido");
			break;	
	}	
	
}
