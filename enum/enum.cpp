#include <iostream>
using namespace std;

enum class Day :char/*underlying storage!*/ { mon = 1, tue, wed, thu, fri, sat, sun };

Day& operator++(Day& d)
{
	return d = static_cast<Day>((static_cast<int>(d) + 1 % 7) + 1);
}

Day operator++(Day& d,int dummyParametr)
{
	Day temp = d;
	d = static_cast<Day>((static_cast<int>(d) + 1 % 7) + 1);
	return temp;
}

int main(void)
{

	Day today = Day::sat;
	Day tomorow1 = ++today;
	Day tomorow2 = today++;
	if(tomorow1 == tomorow2)
		cout << ":)" << endl;
	else
		cout << "code must never reach here!!" << endl;
	return 0;
}
