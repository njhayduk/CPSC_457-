#include <iostream>
#include "syscalls.h"
using namespace std;


long proc_add (long n1, long n2)
{
	return (n1 + n2);

}

int main() {


	cout << "help me" << endl; 

   int prew;
   prew = proc_add( 5,3 );
   cout << "prod_add sum: " << prew << endl;
   
   //prew = syscall_sum( 5, 3 );
   //cout << "syscall_add sum: " << prew << endl;   
}



