#include <iostream>

using namespace std;

void most(int v[], int tam){
	for(int i=0;i<tam;i++){
		cout  << v[i] << " ";
	}
	cout << "\n";
}

void splice(int v[], int tam){ // Front-End
	if(tam > 5){
		return;
	}
	most(v,tam);
	for(int i=tam;i>0;i--){
		v[i-1] -= v[i];
	}
	splice(v,tam+1);
}

void tria(int v[], int tam){ //Back-End
	if(tam == 0){
		return;
	}
	for(int i=0;i<tam-1;i++){
		v[i] += v[i+1];
	}
	tria(v,tam-1);
}

int main(int argc, char** argv)
{
	int x[5] = {1,2,3,4,5};
	tria(x,5);
	//most(x,5);
	splice(x,1);
	return 0;
}