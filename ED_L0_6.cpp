#include <iostream>

using namespace std;

void paracetamol(int x){
	int y=1;
	for(int i = 1; i<=x; i++ ){
		for(int j = 0; j<i;j++){
			int cont = i+1;
			cout << y << " ";
			y++;
			if(cont<j){
				break;
			}
		}
	cout << "\n";
	}
}

int main(int argc, char** argv)
{
	int x;
	cin >> x;
	paracetamol(x);
	return 0;
}