#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");

int idade;

    cout <<("Quantos anos voc� tem ? ");
    cin >>(idade);

    if (idade>=7 && idade<=12)
    {
    cout <<("Voc� est� na categoria Infantil");
    }
    else if (idade>=13 && idade<=17)
    {
    cout <<("Voc� est� na categoria Juvenil");
    }
    else if (idade>=18 && idade<=49)
    {
    cout <<("Voc� est� na categoria Adulto");
    }
    else if (idade>=50)
    {
    cout <<("Voc� est� na categoria Senior");
    }
    else
    {
    cout <<("Voc� est� n�o pertence a uma categoria");
    }
}
