#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");

int num, contador, resultado;
contador=0;
	cout <<"Voc� quer saber a Tabuada do n�mero: ";
	cin >>num;
	while (contador<=10)
	{
		resultado = num * contador;
		cout <<num<<" x "<<contador<<" = "<<resultado<<"\n";
		contador++;
	}
}
