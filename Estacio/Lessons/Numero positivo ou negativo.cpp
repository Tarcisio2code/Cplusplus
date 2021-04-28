#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int num;
cout <<"Informe um número: ";
cin >> num;
if(num>0)
{
	cout <<"Este número é Positivo.";
}
else if(num<0)
{
	cout <<"Este número é Negativo.";
}
}
