#include <iostream>

using namespace std;

int verif(int vec[]){
	int maior=vec[0];
	int indexx=0;
	for(int i=0;i<3;i++){
		if(vec[i]>maior){
			maior = vec[i];
			indexx = i;
		}
	}
	return indexx;
}

int main()
{
	   int adr[3],ig;
	   cin >> adr[0] >> adr[1] >> adr[2];
	   ig = verif(adr);
	   if(ig == 0){
		   cout << 2*adr[1] + 4*adr[2] << endl;
	   }else if(ig == 2){
		   cout << 2*adr[1] + 4*adr[0] << endl;
	   }else{
		   cout << 2*adr[0] + 2*adr[2] << endl;
	   }
    return 0;      
}