#include <iostream>
using namespace std;
int main()
{
int cont, num, qtdeM3=0;
for (cont=1;cont<=10;cont++)
{
cout <<"Informe o "<< cont<< "o. número: ";
cin >>num;
if (num%3==0)
{
qtdeM3+=1;
}
}
cout <<"Forma informados "<< qtdeM3<< " múltiplos de 3.";
}
