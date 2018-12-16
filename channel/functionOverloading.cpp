#include <iostream>
using namespace std;

void f1()
{
	cout << "f1 called with no parameter!\n";
}

void f1(int a)
{
	cout << "f1 called with parameter : " << a << '\n';
}

int main(void)
{
	f1();
	f1(5);
	return 0;
}
