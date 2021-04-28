#include <iostream>
#include <locale>
using namespace std;
int main(){

	int valores[]={1,2,3,4,5,6,7,8,9,10};
	int x;
	x=0;
	
	while(x<10)
		{
			if(valores[x]>5)
			{
				cout<<valores[x]<<" ";
			}
			x++;
		}
}
