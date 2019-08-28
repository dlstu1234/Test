#include "pch.h"
#include "Test2.h"


Test2::Test2()
{
}
void Test2::add(std::string Test)
{
	int sum = 0;
	std::string at = Test;

	if (at.size() > 5) { std::cout << "입력 에러";  return; }
	for (int i = 0; i < at.size(); ++i)
	{
		if (at[i] >= '0' && at[i] <= '9')
		{
			sum += (at[i] - '0')*(at[i] - '0');
		}
	}
	std::cout << at << std::endl;
	std::cout << sum % 10 << std::endl;
}
void Test2::Test()
{
	Test2 a;
	a.add("12345");
	a.add("11905");
	a.add("55203");
	a.add("52102");
	a.add("693121");
}
