#include <iostream>
using namespace std;
int main()
{
int cont, num, maior=0;
for (cont=1;cont<=15;cont++)
{
cout <<"Informe o "<< cont<< "o. n�mero: ";
cin >>num;
if (num>maior)
{
maior=num;
}
}
cout <<"O maior n�mero informado foi "<<maior;
}
