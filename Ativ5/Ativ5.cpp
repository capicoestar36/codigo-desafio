#include <iostream>
#include <cstring>
using namespace std;

/*5) Escreva um programa que inverta os caracteres de um string. 


IMPORTANTE: 

	a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código; 

	b) Evite usar funções prontas, como, por exemplo, reverse; 
*/

main (){
	
	string txt;
	int i;
	
	cout << "Digite algo: \n";
	cin >> txt;
	
	cout << "Conteudo da string txt invertido:\n";
	for (int i=txt.size(); i>=0; i--)
	{
		cout << txt[i];
	}
	
}