#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int num;
cout <<"Informe um n�mero: ";
cin >> num;
if(num>1000)
{
	cout <<num<<" � maior que o sal�rio m�nimo.";
}
else if(num<1000)
{
	cout <<num<<" � menor que o sal�rio m�nimo.";
}
}
