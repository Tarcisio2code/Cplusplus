#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int num;
cout <<"Informe um n�mero: ";
cin >> num;
if(num>0)
{
	cout <<"Este n�mero � Positivo.";
}
else if(num<0)
{
	cout <<"Este n�mero � Negativo.";
}
}
