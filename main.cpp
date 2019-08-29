#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

/*programa teste feito pelos alunos:Caio Lucas e Wernen Rodrigues
/*Programa para testar uma matriz de adjacencia usando a tecnica de busca em profundidade em c++
/*data:23/08/19


/*Dado uma matriz,ache seu correspondente.
*/

/*   | A | B | C | D | E 
/* A | 0 | 0 | 1 | 0 | 0 
/* B | 0 | 0 | 1 | 0 | 0
/* C | 1 | 1 | 0 | 1 | 1
/* D | 0 | 0 | 1 | 0 | 1
/* E | 0 | 0 | 1 | 0 | 0
*/

int grafo [5][5] =
{
	{0,0,1,0,0},
	{0,0,1,0,0},
	{1,1,0,1,1},
	{0,0,1,0,1},
	{0,0,1,0,0},
	

};
	 bool temRelacao (int linhav1, int colunav2) //função para testaar se os vertices tem algum tipo de relacao
	{
	 if(grafo[linhav1][colunav2]) //caso possua relacao retornar true
     {
      return true;
     }
      return false;
	}

int main(int argc ,char *argv[])
{

	cout << temRelacao(1,4) <<endl; //chamando e inicilizando a funcao com posiçoes escolhidas pelo usuario
	return 0;
}
