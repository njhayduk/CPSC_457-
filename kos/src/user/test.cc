#include <iostream>
using namespace std;

int main()
{

	int current = 1;
	int sum = 0;
	
	while (sum <= 10000)
	{
		sum += current;
		current++;	
			
	}

	cout << "The sum of the 10000 integers is: " << sum << endl;

	

	return 0;
}
