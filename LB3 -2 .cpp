#include <iostream>
using namespace std;

	int func(int *pi)
	{
		int x = 1024;
		int ival = x;
		return ival;
	}

	int main()
	{
		int ival;
		int* pi2 = &ival;
	    ival = func(pi2);

		return 0;
		cin.get();
	}