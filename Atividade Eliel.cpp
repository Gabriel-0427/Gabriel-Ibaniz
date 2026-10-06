#include<stdio.h>

char nome[50];
int idade;

int main(){
	
	printf("Escreva seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18){
		printf("Maior de Idade");
	}else if (idade < 18){
		printf("Menor de Idade");
	}
	
	return 0;
	}

