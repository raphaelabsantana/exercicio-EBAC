#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca por cuidar das strings
#include <conio.h>

int main ()

{
	int opcao=0; //definindo vari�veis
	int laco=1;
	
		int registrar()
		{
			setlocale(LC_ALL, "portuguese");
			char arquivo[40];
			char cpf[40];
			char nome[40];
			char sobrenome[40];
			char cargo[40];
			
			printf("\nDigite o CPF a ser cadastrado:\n");
			scanf("%s", cpf);
			
			strcpy(arquivo,cpf);             //respos�vel por copiar valores das strings
			FILE *file;                     //cria arquivo
				file= fopen(arquivo,"w"); //cria arquivo com nome chamado
					fprintf(file,cpf);    //salva o valor da variavel
				fclose(file);            //fecha o arquivo
			
				file=fopen(arquivo,"a"); //abrir arquivo
					fprintf(file,", "); //acrescentar texto
				fclose(file);  		   //fechar arquivo
			
			printf("\nDigite o NOME a ser cadastrado:\n");
			scanf("%s", nome);
				file=fopen(arquivo,"a"); //abrir arquivo
					fprintf(file, nome); //acrescentar texto
				fclose(file);  		    //fechar arquivo
			
				file=fopen(arquivo,"a"); //abrir arquivo
					fprintf(file,", "); //acrescentar texto
				fclose(file);  		   //fechar arquivo
				
			printf("\nDigite o SOBRENOME a ser cadastrado:\n");
			scanf ("%s", sobrenome);
				file=fopen(arquivo,"a"); //abrir arquivo
					fprintf(file, sobrenome); //acrescentar texto
				fclose(file);  		    //fechar arquivo
			
				file=fopen(arquivo,"a"); //abrir arquivo
					fprintf(file,", "); //acrescentar texto
				fclose(file);  		   //fechar arquivo		

			printf("\nDigite o CARGO a ser cadastrado:\n");
			scanf("%s", cargo);
				file=fopen(arquivo,"a"); //abrir arquivo
					fprintf(file, cargo); //acrescentar texto
				fclose(file);  		    //fechar arquivo		
						
			system("pause");
		}
		
		int consultar()
		{
			setlocale(LC_ALL, "portuguese");
			char cpf[40];
			char conteudo[200];
			
			printf("\nDigite o CPF a ser consultado:\n");
			scanf("%s", cpf);
			system("cls");
			FILE *file;
			file = fopen(cpf,"r");
				
				if(file==NULL)
				{
					printf("\nCPF n�o localizado!\n");
				}
				while(fgets(conteudo,200,file) !=NULL)
				{
					printf("\n\nEssas s�o as informa��es do usu�rio:\n");
					printf("%s", conteudo);
					printf("\n\n");
				}
			fclose(file);
			system("pause");
		}
		int deletar()
		{
			setlocale(LC_ALL, "portuguese");
			char cpf[40];
			printf("\nDigite o CPF do usu�rio que deseja deletar:\n");
			scanf("%s",cpf);
			FILE *file;
			file = fopen(cpf, "r");
				if (file==NULL)
					printf ("\nO usu�rio n�o se encontra cadastrado!\n");
					
				else
					{
					fclose(file);
					remove(cpf);
					printf("\nO usu�rio foi deletado!\n");
					}
					
			system("pause");
		}
	for (laco=1;laco=1;)
	{
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	system("cls");
		printf("###CART�RIO DA EBAC###\n\n");   //in�cio do MENU
		printf("Escolha a op��o desejada do MENU:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n");
		printf("\t4 - Sair\n\n");
	
		printf("Software criado por Raphael Santana\n\n");
	
	scanf("%d", &opcao);
	system("cls");
	
		switch(opcao)
		{
		case 1:
		registrar();
		break;
		
		case 2:
		consultar();
		break;
		
		case 3:
		deletar();
		break;

		case 4:
		printf("\nObrigado por usar este software.");
		return 0;
		break;
				
		default:
		printf("\nOp��o inv�lida!\n");
		system("pause");
		break;
		}
	}
}
