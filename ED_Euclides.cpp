#include <iostream>

using namespace std;

int mdc(int x, int y){
	int r;
	if(y == 0){
		return x;
	}
	r = x%y;
	x = y;
	y = r;
	return mdc(x,y);
}

int main(int argc, char** argv)
{
	cout << mdc(192,51);
	return 0;
}