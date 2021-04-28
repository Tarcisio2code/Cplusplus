#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");

int idade;

    cout <<("Quantos anos você tem ? ");
    cin >>(idade);

    if (idade>=7 && idade<=12)
    {
    cout <<("Você está na categoria Infantil");
    }
    else if (idade>=13 && idade<=17)
    {
    cout <<("Você está na categoria Juvenil");
    }
    else if (idade>=18 && idade<=49)
    {
    cout <<("Você está na categoria Adulto");
    }
    else if (idade>=50)
    {
    cout <<("Você está na categoria Senior");
    }
    else
    {
    cout <<("Você está não pertence a uma categoria");
    }
}
