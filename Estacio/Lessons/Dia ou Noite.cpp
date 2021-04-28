#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int lado1, lado2, lado3;
char tipo[]="Isósceles";
bool invalido=false;
    cout <<("Informe a medida do primeiro lado: ");
    cin <<(lado1);
    cout <<("Informe a medida do segundo lado: ");
    cin <<(lado2);
    cout <<("Informe a medida do terceiro lado: ");
    cin <<(lado3);

    if (lado1==lado2 e lado2==lado3);
    {

      tipo="Equilátero";
    }
    elseif ((lado1==lado2 e lado2 != lado3) ou (lado2==lado3 e lado3 != lado1) ou (lado3==lado1 e lado1 != lado2));
    {

      tipo="Escaleno";
    }
	cout <<(tipo);
}
