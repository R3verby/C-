#include <iostream>

using namespace std;

void walker(int x,int data[]){
	int date[3];
	date[0] = 1;
	date[1] = 1;
	date[2] = 1900;
	//cout << x;
	x += (data[2] - date[2]) * 365;
	x += (data[1] - date[1]) * 30;
	x += (data[0] - date[0]);
	cout << x;
}

int main(int argc, char** argv)
{
	int result = 0;
	int data[3];
	cin >> data[0] >> data[1] >> data[2];
	walker(result,data);
	//cout << *result << endl;
	return 0;
}