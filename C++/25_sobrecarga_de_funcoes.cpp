#include <iostream>

using namespace std;

//Primeira fun��o SOMA
int soma(int n1, int n2)
{
	//O que diferencia uma fun��o de outra � a quantidade argumentos
	//Nessa s�o dois argumentos
	return n1 + n2;
}
//Segunda fun��o SOMA
int soma( int n1, int n2, int n3)
{
	//O que diferencia uma fun��o de outra � a quantidade argumentos
	//Nessa s�o tres argumentos
	return n1 + n2 + n3;
}
//Fun��o principal 
int main()
{
	//Chamdno a primeira fun��o SOMA
	cout << soma(1, 2) << endl;
	//Chamdno a segunda fun��o SOMA
	cout << soma(1, 2, 3) << endl;

	return 0;
}
