#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int num, resultado;
cout <<"Informe um n�mero: ";
cin >> num;
resultado=num%2;
if(resultado==0)
{
	cout <<"Este n�mero � Par.";
}
else
{
	cout <<"Este n�mero � �mpar.";
}
}
