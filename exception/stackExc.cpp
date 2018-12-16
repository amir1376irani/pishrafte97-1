#include <iostream>
#include "Stack.h"

using namespace std;

int main(void)
{
	Stack<int> s1;
	Stack<char> s2(20);
	s1.push(1);
	try
	{
		cout << s1.pop() << endl;
		cout << s2.top() << endl;
	}
	catch(Error &e)
	{
		cout << e.what() << endl;
	}
	cout << "although calling top on stack s2 caused an exception to be thrown, "
		<< "but program will continue after that because of catching it and prints this message!" << endl;
	return 0;
}
