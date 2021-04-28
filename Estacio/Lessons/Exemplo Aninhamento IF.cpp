#include <iostream>
#include <locale>

using namespace std;

int main()
{
  int x;

  cout << "Digite um numero: ";

  cin >> x;

  if (x % 2 == 0)
  	{
	    cout << x << "é divisível por 2";
	}
	else
		{
		    if (x % 3 == 0 && x % 5 == 0)
		    	{
		       cout << x << " é divisível por 3 e por 5";
				}
		    else
				{
		        cout << x <<  " ### " ;
		    	}
		}
}
