#include "Log.h"

void returnfunc(int& value)
{
	value++;
}

int main()
{
	int var = 8;
	int* ptr = &var;
	*ptr = 10;

	int** vert = &ptr;

	std::cout << *ptr << std::endl;

	returnfunc(var);

	std::cout << var << std::endl;
	returnValue(10);
}