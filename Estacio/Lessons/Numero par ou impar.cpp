#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int num, resultado;
cout <<"Informe um número: ";
cin >> num;
resultado=num%2;
if(resultado==0)
{
	cout <<"Este número é Par.";
}
else
{
	cout <<"Este número é Ímpar.";
}
}
