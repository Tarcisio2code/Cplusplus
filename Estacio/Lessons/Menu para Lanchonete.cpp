#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");

	int op, qtde;
	float valor;
	char *item;
	bool invalido=false;

	cout <<"----------| CARDÁPIO |----------\n";
	cout <<"100 – Hambúrguer – R$5,50\n";
	cout <<"101 – Cachorro-quente – R$4,50\n";
	cout <<"102 – Milkshake – R$7,00\n";
	cout <<"103 – Pizza brotinho – R$8,00\n";
	cout <<"104 - Cheeseburguer – R$8,50\n";
	cout <<"\n";

	cout <<"Informe o código do seu pedido: ";
	cin >>op;
	cout <<"Informe a quantidade: ";
	cin >>qtde;
	
    switch (op)
    {
		case 100: item="Hambúrguer"; valor=qtde*5.50; break;
		case 101: item="Cachorro-quente"; valor=qtde*4.50; break;
		case 102: item="Milkshake"; valor=qtde*7.00; break;
		case 103: item="Pizza brotinho"; valor=qtde*8.00; break;
		case 104: item="Cheeseburguer"; valor=qtde*8.50; break;
	    default: invalido=true;	cout <<"Pedido Inválido!";
	}
	
	if (!invalido)
	{cout <<qtde<<" x "<<item<<" = "<<valor;}
}
