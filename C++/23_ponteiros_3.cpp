#include <iostream>

using namespace std;

/* ----- Poderiamos utilizar a biblioteca <string.h>, e sua fun��o de
contagem de tamanho strlen(vetor) e em seguida a sua fun��o de concatena��o
de strings, strcat(string1, string2). Abreviariamos bastante o codigo. -----*/

//Fun��o que calcula o tamanho do ponteiro
int my_strlen(char *str)
{
	int tam = 0;
	for(int i = 0; str[i] != '\0'; i++, tam++);
	return tam;
}
//Fun��o que concatena duas strings numa s�
char *my_strcat(char *dest, char *orig)
{
	char *resultado;
	//Fun��o que calcula o tamanho da string do destino, nome principal.
	int tam_dest = my_strlen(dest);
	//Fun��o que calcula o tamanho da string da origem, sobrenome.
	int tam_orig = my_strlen(orig);
	int i, j = 0;
	//Como descobrimos o tamanho do nome e do sobrenome, criamos um char "Resultado" que possuir� o tamanho da soma dos dois ja obtidos
	resultado = new char[tam_dest + tam_orig];
	//O ponteiro p_str est� apontando para a variavel (vetor) resultado que possui certo tamanho calculado anteriormente.
	char *p_str = resultado;
	//La�o de repti��o que define a contagem de i e j e do nome principal
	for(i = 0; dest[i] != '\0'; i++, j++)
	{
		p_str[j] = dest[i];
	}
	//La�o de repti��o que define o resto da contagem de j e do sobrenome
	for(i = 0; orig[i] != '\0'; i++, j++)
	{
		p_str[j] = orig[i];
	}
	//Ponteiro que recebe o valor j contato, e incremente nesse endere�o o vazio para fechar a impress�o da string concatenada
	p_str[j] = '\0';

	//Retornando o resultado
	return resultado;
}
//Fun��o principal que ir� receber todas as outras duas fun��es
int main()
{
	//Nome1 = Nome principal
	char * nome1 = new char[100];
	//Nome2 = Sobrenome
	char * nome2 = new char[100];
	cout << "Digite o primeiro nome: ";
	cin >> nome1;
	cout << "Digite o segundo nome: ";
	cin >> nome2;
	//Impress�o e concatena��o das duas strings
	cout << "Resultado: " << my_strcat(nome1, nome2) << endl;

	return 0;
}
