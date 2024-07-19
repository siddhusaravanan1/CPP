#include "Log.h"

enum Example :unsigned int
{
	A = 8, B, C
};

void returnfunc(int& value)
{
	value++;
}

struct Player
{
	int x, y;
	int moveSpeed;

	void Move(int xa, int ya)
	{
		x += xa * moveSpeed;
		y += ya * moveSpeed;
	}
};

class logger
{
public: 
	enum levelEnum
	{
		LogLevelInfo = 0, LogLevelWarning, LogLevelError
	};
	logger()
	{
		std::cout << "Log Created" << std::endl;
	}
	~logger()
	{
		std::cout << "Log Deleted" << std::endl;
	}

private:
	int m_LogLevel;
public:
	void SetLogLevel(int level)
	{
		m_LogLevel = level;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[Info: " << message << "]" << std::endl;
	}
	void Warning(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[Warning: " << message << "]" << std::endl;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
			std::cout << "[Error: " << message << "]" << std::endl;
	}

	static void ErrorWrite(const char* message)
	{
		std::cout << "[Error: " << message << "]" << std::endl;
	}
};

void function()
{
	logger log;
	log.SetLogLevel(log.LogLevelWarning);
	log.Warning("Hello!");

	logger::ErrorWrite("Hello!");
	log.ErrorWrite("Hello!");
}

int main()
{
	int var = 8;
	int* ptr = &var;
	*ptr = 10;

	int** vert = &ptr;

	std::cout << *ptr << std::endl;

	returnfunc(var);

	Player player;
	player.Move(1, -1);

	std::cout << player.x << std::endl;

	std::cout << var << std::endl;
	returnValue(10);

	////////////////////////////////////////////////

	function();
	std::cout << B << std::endl;
}