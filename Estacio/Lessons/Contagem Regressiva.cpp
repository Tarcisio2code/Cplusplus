#include <iostream>
using namespace std;
int main()
 {
   int num, contador, regressiva;
   bool x = "true";
   
   if (x)
   {
	   cout <<"Qual o valor para início da contagem regressiva? ";
	   cin >>regressiva;
	   for (contador=regressiva;contador>=0;contador--)
		{
	        cout <<contador<<"\n";
		}
		cout <<"B O O M !!!";
   }
 }
