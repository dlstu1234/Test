#pragma once

class ITest
{
public:
	ITest(const std::vector<std::string>&) {}
	
	virtual void Test() = 0;
};

