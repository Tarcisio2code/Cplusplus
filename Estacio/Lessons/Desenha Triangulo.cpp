#include <iostream>
using namespace std;
int main()
 {
   int linhas, contador;
   string desenho="";
   cout <<"Quantas linhas deve ter o tri�ngulo? ";
   cin >>linhas;
   for (contador=1;contador<=linhas;contador++)
	{
		desenho=desenho+"*";
		cout <<desenho <<"\n";
	}
 }
