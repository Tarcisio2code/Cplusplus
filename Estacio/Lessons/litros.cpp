#include <iostream>
#include <locale>

using namespace std;

int main()
{

setlocale(LC_ALL,"ptb");
	
float qtdeDin, valComb, qtdeLitros;

cout <<"pre�o do combustivel ";

cin >> valComb;

cout <<"quanto voc� tem ";

cin >> qtdeDin;

qtdeLitros=qtdeDin/valComb;

cout <<"voc� consegue abastecer "<<qtdeLitros;

}
