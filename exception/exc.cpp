#include <iostream>

using namespace std;

class Error
{
	string err;
public:
	Error(string s):err(s){}
	string what(){return err;}
};

double divide (int a,int b) throw (Error)
{
	if(b == 0)
		throw Error("divide is wrong!");
	return double(a)/b;
}

int main(void)
{
	int a,b;
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	cout << "a/b : ";
	try
	{
		cout << divide(a,b) << endl;
	}
	catch(Error &er)
	{
		cout << er.what() << endl;
	}

	cout << "although excecption can occur if you pass seccond integer as zero" << endl
		<< "but program will continue and prints this message anyway!" << endl;
	return 0;
}
