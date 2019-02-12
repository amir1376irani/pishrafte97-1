#include <iostream>
using namespace std;

class A
{
public:
	static int min(int a, int b){return a<b?a:b;}
};


/*namespace A
{
	int min(int a, int b){return a<b?a:b;}
};*/

int main(void)
{
	cout << A::min(105,250) << endl;// 105
	return 0;
}
