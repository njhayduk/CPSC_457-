#include <iostream>
using namespace std;

#include "syscalls.h"

int main()
{

	int oddNum = 3;
	int evenNum = 2;

	int isEvenResult;

	isEvenResult = isEven(oddNum);
	cout << "Our number " << oddNum << "is even: " << isEvenResult << endl;
		
	isEvenResult = isEven(evenNum);
	cout << "Our number " << evenNum << "is even: " << isEvenResult << endl;

	return 0;

}