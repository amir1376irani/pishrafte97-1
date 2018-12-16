#include <iostream>
#include "myMath.h"
#include "myMath.h" //cause of header gaurd, we can include more than once without error!

using namespace std;
using namespace mymath;

int main(void)
{
	cout << myMin(1005,2500) << endl;//1005
	//or mymath::myMin(1005,2500)  without "using namespace mymath"
	return 0;
}
