#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int num, quadrado;
cout <<"Informe um n�mero: ";
cin >> num;
quadrado=num*num;
cout <<"o quadrado de "<<num<<" � "<<quadrado<< endl;

if(quadrado>25)
{
cout <<quadrado<<" � maior que 25";
}

}
