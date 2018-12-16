#include <iostream>
using namespace std;

class Test
{
private:
	int intPart;
public:
	Test(int b = 0) { intPart = b; }
	int operator+(int a) { return intPart + a; }
	int operator+(Test &rh) { return intPart + rh.intPart; }
	int getIntPart() { return intPart; }
	operator int() { return intPart; }
};

int main(void)
{
	Test Test1, Test2(7);
	cout << "Test 1 -> intPart : " << Test1.getIntPart() << endl;
	cout << "Test 2 -> intPart : " << Test2.getIntPart() << endl;
	cout << "Test 1 + Test 2 (getter) : " << Test1.getIntPart() + Test2.getIntPart() << endl;
	cout << "Test 1 + Test 2 (operator overload) : " << Test1 + Test2 << endl;
	cout << "Test 1 + 55 (operator int! means casting to int) : " << Test1 + 55 << endl;
	cout << "Test 2 + 55 (operator int! means casting to int) : " << Test2 + 55 << endl;
	return 0;
}
