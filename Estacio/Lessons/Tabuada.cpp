#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");

int num, contador, resultado;
contador=0;
	cout <<"Você quer saber a Tabuada do número: ";
	cin >>num;
	while (contador<=10)
	{
		resultado = num * contador;
		cout <<num<<" x "<<contador<<" = "<<resultado<<"\n";
		contador++;
	}
}
