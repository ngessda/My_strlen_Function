#include <iostream>
using namespace std;

void strlength(const char* string)
{
	int result = 0;
	while (string[result] != '\0')
	{
		result++;
	}
	cout << result << endl;
}

void main()
{
	const char* str = "Hello";
	strlength(str);
}