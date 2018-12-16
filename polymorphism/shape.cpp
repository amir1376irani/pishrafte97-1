#include <bits/stdc++.h>

using namespace std;

class Point
{
private:
	double x,y;
public:
	Point(int xx, int yy):x(xx), y(yy){}
	double getX(){return x;}
	double getY(){return y;}
};

class shape{};

class _2D : public shape
{
public:		
	virtual double mohit() = 0;
	virtual double masahat() = 0;
};

class Mostatil : public _2D
{
private:
	double a,b;
public:
	Mostatil(int tool,int arz):a(arz),b(tool){}
	double mohit(){return (a + b) * 2;}
	double masahat(){return a * b;}
};

class Dayere : public _2D
{
private:
	double r;
	Point markaz;
public:
	Dayere(int shoa,Point p):r(shoa), markaz(p){}
	double mohit(){return 2 * 3.141592654 * r;}
	double masahat(){return 3.141592654 * r * r;}
	bool operator<(Dayere& d)
	{
		double x = markaz.getX();
		double y = markaz.getY();
		double x2 = d.markaz.getX();
		double y2 = d.markaz.getY();
		return (sqrt(x * x + y * y) < sqrt(x2 * x2 + y2 * y2));
	}
};

int main()
{
	_2D* sh;
	char t;
	cout << "mostatil / dayere => ";//just enter 'm' or 'd'
	cin >> t;
	switch (t)
	{
		case 'm':
			sh = new Mostatil(3,4);
			break;
		case 'd':
			sh = new Dayere(3,Point(1,2));
			break;
	}

	cout << "masahat : " << sh->masahat() << endl;
	cout << "mohit : " << sh->mohit() << endl;

	Dayere dayere1 = Dayere(3,Point(1,2));//remember not to call constructor as Dayere(3,1,2)
	Dayere dayere2 = Dayere(3,Point(11,22));

	if(dayere1 < dayere2)
		cout << "[1,2] is closser to [0,0] than [11,22]" << endl;//sure it is!
	else
		cout << "[11,22] is closser to [0,0] than [1,2] !!" << endl;//must never be executed
	return 0;
}
