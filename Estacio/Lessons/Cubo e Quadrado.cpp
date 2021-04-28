#include <iostream>
#include <locale>

using namespace std;

int main()
{

setlocale(LC_ALL,"ptb");
	
int numero, quadrado, cubo;

cout <<"Informe um numero: ";

cin >> numero;

quadrado=numero*numero;
cubo=numero*numero*numero;

cout <<numero<<" ao quadrado é " <<quadrado<< endl;
cout <<numero<<" ao cubo é "<<cubo;

}
