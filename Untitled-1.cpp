#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <string.h>

using namespace std;

// crie uma função que calcula o fatorial de um numero.
int fatorial(int n){
	if(n == 1){
		return 1;
	}
	    return fatorial(n-1)*n;
}
// Calcule a soma de x e y e coloque o resultado na variável apontada pelo ponteiro soma.
// Depois disso, calcule x - y e coloque o resultado na variável referenciada por subt.
void calc (int x, int y, int *soma, int &subt){
	subt = x-y;
	*soma = x+y;
	//cout << subt;
	//cout << *soma;
}

int main(){
	int x,y,soma,subt;
	cin >> x >> y;
	calc(x,y,&soma,subt);
	cout << soma << " " << subt << endl;
	//cout << soma;
	//cout << subt;
    
    return 0;
}