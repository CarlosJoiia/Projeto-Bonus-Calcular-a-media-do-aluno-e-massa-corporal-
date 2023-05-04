#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



void menu(){
	system("cls");
	setlocale(LC_ALL,"portuguese");
	char nm[30];
	int op;
	int i;
	float n1,n2,n3,n4,r;
	printf("------------------------BEM VINDO-----------------------------\n");
	printf("Digite 1 para Executar o Programa de Calcular a Médias\n");
	printf("Digite 2 para Executar o Programa de Calcular a Massa Corporal\n");
	printf("Digite 3 para SAIR\n");
	printf("--------------------------------------------------------------\n");
	printf("------------------------Desenvolvido por Carlos Alexandre-----\n");
	printf("--------------------------------------------------------------\n");
	printf("Digite a Opção que Deseja Acessar: ");
	scanf("%d",&op);
	
	switch(op){
		
		case 1:
			system("cls");
			printf("----------------------------------------------------\n");
			printf("-------------------BEM VINDO------------------------\n");
			printf("----------------------AO----------------------------\n");
			printf("--------------Software de médias--------------------\n");
			printf("----------------------------------------------------\n");
			printf("-----------------Desenvolvido por Carlos Alexandre--\n");
			printf("----------------------------------------------------\n");
			printf("Digite o nome do Aluno --> ");
			fflush(stdin);
			gets(nm);
			printf("\nDigite a Nota 1º Bimestre do %s --> ",nm);
			scanf("%f",&n1);
			printf("\nDigite a Nota 2º Bimestre do %s --> ",nm);
			scanf("%f",&n2);
			printf("\nDigite a Nota 3º Bimestre do %s --> ",nm);
			scanf("%f",&n3);
			printf("\nDigite a Nota 4º Bimestre do %s --> ",nm);
			scanf("%f",&n4);
			r=n1+n2+n3+n4;
			r=r/4;
			system("cls");
			printf("---------------------------------------------------\n");
			printf("Nome do Aluno: %s \n",nm);
			printf("Nota do 1º Bimestre: %.1f\n",n1);
			printf("Nota do 2º Bimestre: %.1f\n",n2);
			printf("Nota do 3º Bimestre: %.1f\n",n3);
			printf("Nota do 4º Bimestre: %.1f\n",n4);
			printf("A Média do Aluno %s é:%.1f\n",nm,r);
			printf("---------------------------------------------------\n");
			if(r>=7){
				printf("O Aluno %s está APROVADO\n",nm);
				printf("---------------------------------------------------\n");
			}
			if(r>=5 && r<7){
				printf("O Aluno %s está de RECUPEÇÃO\n",nm);
				printf("---------------------------------------------------\n");
			}
			if(r<5){
				printf("O Aluno %s está REPROVADO\n",nm);
				printf("---------------------------------------------------\n");
			
			}	
		break;
		case 2:
			system("cls");
			printf("----------------------------------------------------\n");
			printf("-------------------BEM VINDO------------------------\n");
			printf("----------------------AO----------------------------\n");
			printf("--------------Software de Massa Corporal------------\n");
			printf("----------------------------------------------------\n");
			printf("-----------------Desenvolvido por Carlos Alexandre--\n");
			printf("----------------------------------------------------\n");
			printf("Digite o Seu Nome --> ");
			fflush(stdin);
			gets(nm);
			printf("\n%s Digite a Sua idade --> ",nm);
			scanf("%d",&i);
			printf("\n%s Digite o Seu Peso --> ",nm);
			scanf("%f",&n1);
			printf("\n%s Digite a Sua Altura  METROS EX:1,72--> ",nm);
			scanf("%f",&n2);
			n3=n2*n2;
			r=n1/n3;
			system("cls");
			printf("---------------------------------------------------\n");
			printf("--------------------Resultado----------------------\n");
			printf("---------------------------------------------------\n");
			printf("\nNome--> %s",nm);
			printf("\nPeso--> %.1f",n1);
			printf("\nAltura--> %.2f",n2);
			printf("\nMassa Corporal--> %.1f\n",r);
			
			
			if(i<60){
				if(r<=18.5){
					printf("---------------------------------------------------\n");
					printf("%s Você está Abaixo do Peso !!\n",nm);
					printf("---------------------------------------------------\n");
				}
				if(r>18.5 && r<25){
					printf("---------------------------------------------------\n");
					printf("%s Você está Com um Peso Nomrmal !!\n",nm);
					printf("---------------------------------------------------\n");
				}
				if(r>=25 && r<=29.9){
					printf("---------------------------------------------------\n");
					printf("%s Você está Acima do Peso (sobrepeso)!!\n",nm);
					printf("---------------------------------------------------\n");
				}
					
				if(r>=30 && r<=39.4){
					printf("---------------------------------------------------\n");
					printf("%s Você está com Obesidade 1 !!\n",nm);
					printf("---------------------------------------------------\n");
				}
						
				if(r>39.4 && r<40){
					printf("---------------------------------------------------\n");
					printf("%s Você está com Obesidade 2 !!\n",nm);
					printf("---------------------------------------------------\n");
				}
							
				if(r>=40){
					printf("---------------------------------------------------\n");
					printf("%s Você está com Obesidade 3 !!\n",nm);
					printf("---------------------------------------------------\n");
				}	
			}
			
			// IMC para idosos
			
			if(i>=60){
				if(r<=22){
					printf("---------------------------------------------------\n");
					printf("%s Você está Abaixo do Peso !!\n",nm);
					printf("---------------------------------------------------\n");
				}
				if(r>22 && r<=27){
					printf("---------------------------------------------------\n");
					printf("%s Você está Com um Peso Nomrmal !!\n",nm);
					printf("---------------------------------------------------\n");
				}
				if(r>27){
					printf("---------------------------------------------------\n");
					printf("%s Você está com Excesso de Peso (sobrepeso)!!\n",nm);
					printf("---------------------------------------------------\n");
				}		
			}
		break;	
		case 3:
			abort();
		break;
	}
} 

void vm(){
	int v1=1;
	int v2=2;
	int var;
	printf("---------------------------------------------------\n");
	printf("Deseja voltar ao Menu Inicial? \n");
	printf("Digite 11 para SIM ou Digite 2 para Não--> ");
	scanf("%d",&var);
	printf("---------------------------------------------------\n");
	
	if(var == v1){
		menu();
	}
	if(var == v2){
		abort();
	}
	if(var !=v1 && var!= v2){
		while(var!= v1 && var !=v2){
			system("cls");
			printf("---------------------------------------------------\n");
			printf("Comando INVALIDO!!!! \n");
			printf("---------------------------------------------------\n");
			printf("Deseja voltar ao Menu Inicial? \n");
			printf("Digite 1 para SIM ou Digite 2 para Não--> ");
			scanf("%d",&var);
			printf("---------------------------------------------------\n");
			if(var == v1){
				menu();
			}
			if(var == v2){
				abort();
			}
		}
	}
}

int main(){
	menu();
	int v1=1;
	while(v1==1){
		vm();
	}
	
	return 0;
}
