#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int num, quadrado;
cout <<"Informe um número: ";
cin >> num;
quadrado=num*num;
cout <<"o quadrado de "<<num<<" é "<<quadrado<< endl;

if(quadrado>25)
{
cout <<quadrado<<" é maior que 25";
}

}
