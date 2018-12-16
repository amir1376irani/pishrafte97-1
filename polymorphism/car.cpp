#include <bits/stdc++.h>

using namespace std;

class base
{
public:
	virtual void print() = 0;
};

class A : public base
{
public:		
	void print(){cout << "A" << endl;}
};

class B : public base
{
public:
	void print(){cout << "B" << endl;}
};

int main()
{
	base *c;
	int a;
	cin >> a;//enter 1 or 0
	if(a)
		c = new A;
	else
		c = new B;
	c->print();//determined at runtime
	delete c;
	return 0;
}
