#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout <<"hello"<<endl;


	int a = 10;
	int &b = a;

	cout <<"a = "<<a<<"; b = "<<b<<endl;

	cout <<"input b"<<endl;

	cin >>b;

	cout <<"a = "<<a<<"; b = "<<b<<endl;
	cout <<&b<<endl<<&a<<endl;

	system("pause");
	return 0;
}