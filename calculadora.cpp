#include<stdio.h>
#include<stdlib.h>
 
float valor1,valor2,resultado;
char operador;
int op;
void menu();
float calcula(char operador, float valor1, float valor2);
int adicao(void);
int subtracao(void);
int multiplicacao(void);
int divisao(void);

int main()
{	
	int op=0;
	do
	{
		
		menu();
		scanf("%d",&op);
		switch(op)
		{
			case 1:adicao(); break;
			case 2:subtracao();break;
			case 3:multiplicacao();break;
			case 4:divisao();break;
			case 5:break;
			default:printf("digite uma opcao valida\n");
		}
	}while(op!=5);
	
		
}

//exibe as operacoes que realiza
void menu(){
	printf("=====CALCULADORA====\n\n");
	printf("[1] ADICAO\n");
	printf("[2] SUBTRACAO\n");
	printf("[3] MULTIPLICACAO\n");
	printf("[4] DIVISAO\n");
	printf("[5] SAIR DO PROGRAMA\n");
}

//realiza o calculo de acordo com o operador indicado
float calcula( float valor1, float valor2,char operador)
{	
	float resultado;
	switch(operador)
	{
		case '+': resultado= valor1+valor2; break;
		case '-': resultado= valor1-valor2; break;
		case '*': resultado= valor1*valor2; break;
		case '/': resultado= valor1/valor2; break;
		default: printf("escolha uma opcao valida\n\n");	
	}
	return resultado;
}
//realiza a soma dos valores
int adicao(void)
{ 

		printf("SOMAR\n");
		printf("digite o valor:\n");scanf("%f",&valor1);
		printf("digite o valor:\n");scanf("%f",&valor2);
			resultado=calcula(valor1,valor2,'+');
			printf("%1.f + %1.f = %1.f\n\n" ,valor1,valor2,resultado);
			return 0;			
}
//realiza a subtraca dos valores
int subtracao(void)
{
	
		printf("subtrair\n");
		printf("digite o valor:\n");scanf("%f",&valor1);
		printf("digite o valor:\n");scanf("%f",&valor2);
			resultado=calcula(valor1,valor2,'-');
			printf("%1.f - %1.f = %1.f\n\n" ,valor1,valor2,resultado);
			return 0;
}
//realiza a multiplicacao dos valores
int multiplicacao(void)
{
		printf("multiplicar\n");
		printf("digite o valor:\n");scanf("%f",&valor1);
		printf("digite o valor:\n");scanf("%f",&valor2);
			resultado=calcula(valor1,valor2,'*');
			printf("%1.f * %1.f = %1.f\n\n" ,valor1,valor2,resultado);
			return 0;
}
//realiza a divisao dos valores
int divisao(void)
{
	
		printf("DIVISAO\n");
		printf("digite o valor:\n");scanf("%f",&valor1);
		printf("digite o valor:\n");scanf("%f",&valor2);
			if(valor2==0)
			{
				printf("erro nao existe divisao por zero!!!!!!\n");
			}else{
				resultado=calcula(valor1,valor2,'/');
				printf("%1.f / %1.f = %1.f\n\n" ,valor1,valor2,resultado);
			}
			
			return 0;
	
}

