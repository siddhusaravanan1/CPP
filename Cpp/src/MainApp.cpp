#include "iostream"
#include "string"

int main()
{
	unsigned int variable = 10;

	std::string message = "value is ";

	char dot = '.';

	variable = 3;
	std::cout << message << variable << dot << std::endl;

	variable = -1;
	std::cout << message << variable << dot << std::endl;
}