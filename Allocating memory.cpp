//C++ Allocating memory
// I allocate pointer variable, which i called ptr. The i call new with an int type, which returns a pointer to an interger. I save that return value in the ptr variable 


#include<iostream>
using namespace std;
int main()
{
	int *ptr = new int;
	*ptr = 10;
	cout << *ptr << endl;
	return 0;
}

