#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	return 0;

Inicio.
	var char palavra[50], lacuna[50], letra
	var int tamanho, i, vida = 5, acerto = 0,
	


	Solicitei a palavra.
	Receber a palavra.
	
	tamanho <- descobrir o tamanho da palavra digitada.
	
	For(i=0;i<tamanho; i++)
	{
		Lacuna[i] = "-";
	}
	
	limpar a tela;
	
	
	while(vidas>0)
	{	
		mostrar lacuna para o jogador
		
		pedir para o jogador digitar uma letra.
		receber a letra
		
		For(i=0;i<tamanho; i++)
		{
			if (palavra[i] == letra)
				Lacuna[i] = letra;
				acerto++;
		}
		
		if (acerto == 0)
			vida--;
	
	}
	
	
