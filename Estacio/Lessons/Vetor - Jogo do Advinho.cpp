#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
 int num,ind,tentativas=0, numeros[10];
 bool achou=false;
 cout <<"*** Rodada do 1o. jogador ***\n";
 for (ind=0;ind<=9;ind++)
	 {
		 cout <<"Informe o "<<ind+1<<"o. n�mero: ";
		 cin >>numeros[ind];
	 }
 cout <<"*** Rodada do 2o. jogador ***\n";
 cout <<"Que n�mero acha que foi informado? ";
 cin >>(num);
 tentativas=1;
 ind=0;
 while (!achou and tentativas<=3)
 {
	while (!achou and ind<=9)
	{
	 	if (numeros[ind]==num)
		 {
		 	achou=true;
		 }
	 	ind++;
	}
	if (!achou)
		{
		 tentativas++;
		 cout <<"N�mero n�o encontrado!!!\n";
		 cout <<"Tentativa "<<tentativas<<" - Que n�mero acha que foi informado? ";
		 cin >>(num);
		 ind=0;
		}
 }
 if (achou)
	 {
	 	cout <<"Parab�ns! Este n�mero est� na posi��o "<<ind<<" do vetor! Voc� usou "<<tentativas<<" tentativas...";
	 }
 else
	 {
	 	cout <<"Que pena! Voc� n�o acertou...";
	 }
}

