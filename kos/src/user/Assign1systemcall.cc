#include <iostream>
using namespace std;

#include "syscalls.h"

int main()
{

	long num1 = 3;
	long num2 = 2;

	long sysaddResult;

	sysaddResult = sysadd(num1,num2);
	cout << "Adding numbers " << num1 << " + " << num2 <<  " = " << sysaddResult << endl;

	return 0;

}