#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int num;
cout <<"Informe um número: ";
cin >> num;
if(num>1000)
{
	cout <<num<<" é maior que o salário mínimo.";
}
else if(num<1000)
{
	cout <<num<<" é menor que o salário mínimo.";
}
}
