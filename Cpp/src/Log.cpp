#include "Log.h"

void returnValue(int value)
{
	std::string templateText = "The value is ";
	char dot = '.';
	std::cout << templateText << value << dot << std::endl;
}

int Multiply(int a, int b)
{
	int result = a * b;
	return result;
}

void logMultiply(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}
const char* log(const char* message)
{
	std::cout << message << std::endl;
	return message;
}