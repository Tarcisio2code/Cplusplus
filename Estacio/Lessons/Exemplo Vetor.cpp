#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
	
	char nomes[45];
	int pos;
	
	for (pos=0;pos<=44;pos++)
	{
		cout <<"Informe o nome do "<<pos+1 <<"o. aluno: ";
		cin >>nomes[pos];
	}

}
