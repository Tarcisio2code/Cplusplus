#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
	
	int lin, col;
	float notas[5][3];
	
	for (lin=0;lin<=4;lin++)
	{
		cout <<"*** Notas do "<<lin+1 <<"o. aluno ***\n";
		for (col=0;col<=2;col++)
		{
			cout <<"Informe a nota "<<col+1 <<": ";
			cin >>notas[lin][col];
		}
	}
	//exibição das notas
	for (lin=0;lin<=4;lin++)
	{
		cout <<"*** Notas do "<<lin+1 <<"o. aluno ***\n";	
		for (col=0;col<=2;col++)
		{
			cout <<"A nota "<<col+1 <<" é: " <<notas[lin][col] <<"\n";
		}
	}
}
