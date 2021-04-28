#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");

	int idade, contador;
	float peso, pesoMedio, idadeMedia;
	
	pesoMedio=0.0;
	idadeMedia=0.0;
	contador=0;
	
	cout <<"[digite 0 para sair]\n";
	cout <<"Informe o peso do participante: ";
	cin >>peso;
	while (peso!=0)
	{
		cout <<"Informe a idade do participante: ";
		cin >>idade;
		contador++;
		pesoMedio=pesoMedio+peso;
		idadeMedia=idadeMedia+idade;
		cout <<"Informe o peso do participante: ";
		cin >>peso;
	}
	pesoMedio=pesoMedio/contador;
	idadeMedia=idadeMedia/contador;
	if (contador!=0)
	{
		cout <<"O peso médio dos "<<contador<<" participantes é "<<pesoMedio<<"\n";
		cout <<"A idade média dos "<<contador<<" participantes é "<<idadeMedia;
	}

}
