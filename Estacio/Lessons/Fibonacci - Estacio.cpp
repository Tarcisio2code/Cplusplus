#include <iostream>
using namespace std;
int main()
{
 int fibonacci=0, termo_anterior=0, termo_atual=1, cont, qtdeTermos=0;
 cout <<"Quantos termos da série de Fibonacci deseja ver? ";
 cin >>qtdeTermos;
 cout <<"Os termos são: \n"<<termo_anterior<<"\n"<<termo_atual<<"\n";
 for (cont=1;cont<=qtdeTermos;cont++)
 {
 fibonacci=termo_anterior+termo_atual;
 termo_anterior=termo_atual;
 termo_atual=fibonacci;
 cout <<fibonacci<<"\n";
 }
}
