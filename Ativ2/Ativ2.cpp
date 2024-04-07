#include <iostream>
using namespace std;

/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e 
o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência. 

IMPORTANTE:  
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código; */

int main()
{
    int num, valor=0, temp1, temp2=1;

    cout << "Qual o numero a ser encontrado? ";
    cin >> num;

    while (temp2<=num) {
        temp1 = valor;
        valor = temp2;
        temp2 = temp2 + temp1;
    }
    
    if (valor == num)
    {
    	cout << "Valor pertence a sequencia" << endl;
    }
    else
    {
    	cout << "Valor nao pertence a sequencia" << endl;
    }
    return 0;
}