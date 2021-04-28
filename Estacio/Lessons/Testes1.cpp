
#include <iostream>
#include <locale>

using namespace std;

int main(){

char voto;
int contA, contB, contN, num;

cout<< "Digite o número do aluno: "; cin>> num;

for (num!=0) {

  cout<< "Digite a letra de seu candidato: "; cin>> voto;

  if (voto == 'A')

    { contA++; }

  else if (voto == 'B')

    { contB++; }

  else

  { contN++; }

  cout<< "Digite o número do aluno: ";

  cin>> num;

}



}
