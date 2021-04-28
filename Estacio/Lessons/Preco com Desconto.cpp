#include <iostream>
#include <locale>

using namespace std;

int main()
{

setlocale(LC_ALL,"ptb");
	
float valorCompra, valorFinal;

cout <<"Qual é o valor de compra: ";

cin >> valorCompra;

valorFinal=valorCompra+(valorCompra*20/100);

cout <<"O valor com desconto sera: " << valorFinal;

}
