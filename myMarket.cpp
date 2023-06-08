#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nomeProd[50];
	int codigoProd[50], quantProd[50];
	float precoProd[50];
} Produtos;

int main(){
	
	int i, maisProd, opcaoFunction;
	char voltarMenu[30];
	
	Produtos meusProdutos;
	
	do{
		
		printf("\n_____________\n");
		printf("\nmyMarket\n");
		printf("\n______________\n");
		printf("\n1- VISUALIZAR ESTOQUE: \n");
		printf("\n2- ADICIONAR/REMOVER PRODUTO: \n");
		printf("\n3- VENDAS: \n");
		printf("\n0- PARA FINALIZAR O PROGRAMA. \n");
		
		printf("\nSELECIONE A OPCAO DESEJADA: \n");
		scanf("%d", &opcaoFunction);
		
		switch(opcaoFunction){
			//OP��O PARA VISUALIZAR ITENS CADASTRADOS EM ESTOQUE;
			case 1:
				do{
				printf("\nVOCE SELECIONOU VISUALIZAR ESTOQUE;\n");				
				printf("\nPRODUTO: %s\n", meusProdutos.nomeProd[i]);
				printf("\nCODIGO DO PRODUTO: %d\n", meusProdutos.codigoProd[i]);
				printf("\nPRECO: %.2f\n", meusProdutos.precoProd[i]);
				printf("\nQUANTIDADE: %d\n", meusProdutos.quantProd[i]);
				printf("\nDIGITE SAIR PARA VOLTAR AO MENU PRINCIPAL: \n");
				scanf("%s", &voltarMenu);
				}while(voltarMenu == "sair" || voltarMenu == "SAIR");
				break;
				
			//OP��O PARA ADICIONAR PRODUTOS EM ESTOQUE;	
			case 2:
				printf("\nVOCE SELECIONOU ADICIONAR/REMOVER PRODUTO;\n");
				
				do{
					printf("\nDIGITE NOME DO PRODUTO: ");
					scanf("%s", &meusProdutos.nomeProd[i]);
					printf("\nCODIGO DO PRODUTO: ");
					scanf("%d", &meusProdutos.codigoProd);
					printf("\nPRECO DO PRODUTO: ");
					scanf("%f", &meusProdutos.precoProd[i]);
					printf("\nQUANTIDADE DO PRODUTO: ");
					scanf("%d", &meusProdutos.quantProd[i]);
				
				printf("\nDESEJA CADASTRAR MAIS PRODUTOS? \n");
				printf("\n1- SIM\n");
				printf("\n2- NAO\n");
				scanf("%d", &maisProd);
				}while(maisProd == 1);			
				break;
				
			case 3:
				printf("\nVOCE SELECIONOU VENDAS;\n");
				break;
		}
	}while(opcaoFunction != 0);
}
