#include <iostream>
#include <locale>

using namespace std;

int main()
{

setlocale(LC_ALL,"ptb");
	
float qtdeDin, valComb, qtdeLitros;

cout <<"preço do combustivel ";

cin >> valComb;

cout <<"quanto você tem ";

cin >> qtdeDin;

qtdeLitros=qtdeDin/valComb;

cout <<"você consegue abastecer "<<qtdeLitros;

}
