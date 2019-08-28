// TestApplication.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "Test2.h"
#include <limits>

using namespace std;

template<typename T>
[[nodiscard]] T Input()
{
	T val;

	while (true)
	{
		cin >> val;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');

			cout << typeid(T).name() << " : 입력 에러" << endl;
		}
		else { break; }
	}

	cin.ignore(INT_MAX, '\n');
	return val;
}


int main(int n, const char* ar[])
{

	Test2::Test();



	getchar();

	return 0;
}

