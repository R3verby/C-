#include <iostream>
#include <cmath>

using namespace std;

float thevoe(int a,int b,int c, int d){
	//int aux;
	a -= c;
	b -= d;
	//cout << a << " " << b;
	return sqrt((a*a)-(b*b));
	
}

int main(int argc, char** argv)
{
	//float result;
	//int x1,x2,y1,y2;
	cout << thevoe(10,5,5,3);
	//thevoe(x1,x2,y1,y2);
	//cout << result << endl;
	return 0;
}