#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
float qtdeDias, idade;
cout <<"Quantos dias voc� j� viveu? ";
cin >> qtdeDias;
idade=qtdeDias/365;
cout <<"Voc� j� viveu " << idade<<" anos."<< endl;
if(idade>=18)
{
	cout <<"Voc� j� � maior de idade.";
}
}
