#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv, char **environmentVars)
{
	int i = 0;
	while (environmentVars[i])
	{
		cout << environmentVars[i] << endl;
		i++;
	}

	return 0;
}
