#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");

	int numMes;
	char *mesExtenso;
	bool invalido=false;
	
    cout <<("Informe o número do mês: ");
    cin >>numMes;
    switch (numMes)
    {
    	case 1: mesExtenso="Janeiro"; break;
    	case 2: mesExtenso="Fevereiro"; break;
    	case 3: mesExtenso="Março"; break;
    	case 4: mesExtenso="Abril"; break;
    	case 5: mesExtenso="Maio"; break;
    	case 6: mesExtenso="Junho"; break;
    	case 7: mesExtenso="Julho"; break;
    	case 8: mesExtenso="Agosto"; break;
    	case 9: mesExtenso="Setembro"; break;
    	case 10: mesExtenso="Outubro"; break;
    	case 11: mesExtenso="Novembro"; break;
    	case 12: mesExtenso="Dezembro"; break;
    	default: invalido=true;
	}
	
	if (invalido==true)
	{mesExtenso="Mês Inválido";}
    
    cout <<mesExtenso;
}
