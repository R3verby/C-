#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <string.h>
#include <string>
//A=65 Z=90

using namespace std;

void inverter(string frase){
	for(int i=0;frase[i] != '\0';i++){
		if((int)frase[i]<91 && (int)frase[i]>64){
			frase[i] = tolower(frase[i]);
			//cout << frase[i] << endl;
			//frase[i] -= 65;
			//cout << frase[i] << endl;
			//cout << "1";
		}else{
			frase[i]=toupper(frase[i]);
		}
	}
	cout << frase << endl;
}

int main(){
	string frase;
	getline(cin, frase); 
	inverter(frase);
	//cout << frase << endl;
	//cout << tolower('S');
	return 0;
}