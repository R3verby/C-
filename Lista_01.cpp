#include <iostream>
#include <string.h>

using namespace std;

//Questao 13
int multrec(int x, int y){
	if(y==1){
		return x;
	}
	return x + multrec(x,y-1);
}

//Questao 12
int mdcrec(int x,int y){
	if(y==0){
		return x;
	}
	mdcrec(y,x%y);
}

//Questtao 11
int exprec1(int k,int n){
		if(n==1){
		return k;
	}
	return k * exprec1(k,n-1);
}

int main(int argc, char** argv)
{
	
	return 0;
}