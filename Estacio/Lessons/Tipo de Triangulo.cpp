#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int lado1, lado2, lado3;
char *tipo="Isósceles";
bool invalido=false;
    cout <<("Informe a medida do primeiro lado: "); cin >>(lado1);
    cout <<("Informe a medida do segundo lado: "); cin >>(lado2);
    cout <<("Informe a medida do terceiro lado: "); cin >>(lado3);
    
    if (lado1==lado2 && lado2==lado3)
    {tipo="Equilátero";}
    
    else if (lado1==lado2 || lado2==lado3 || lado3==lado1)
    {tipo="Escaleno";}
    
	cout <<"Este é um triângulo "<<tipo;
}
