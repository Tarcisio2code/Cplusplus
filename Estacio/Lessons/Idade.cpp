#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
float qtdeDias, idade;
cout <<"Quantos dias você já viveu? ";
cin >> qtdeDias;
idade=qtdeDias/365;
cout <<"Você já viveu " << idade<<" anos."<< endl;
if(idade>=18)
{
	cout <<"Você já é maior de idade.";
}
}
