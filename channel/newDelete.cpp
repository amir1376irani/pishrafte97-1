#include <iostream>
using namespace std;

int number = 0;

class myClass
{
private:
	int num;
public:
	myClass()
	{
		num = number++;
		cout << "constructed -> " << num << endl;
	}
	~myClass() { cout << "destructed -> " << num << endl; }
};

int main(void)
{
	myClass *p1 = new myClass, *p2 = new myClass[10];

	delete p1; //correct
	//delete[] p1; //incorrect

	//delete p2; //incorrect
	delete[] p2; //correct

	return 0;
}
