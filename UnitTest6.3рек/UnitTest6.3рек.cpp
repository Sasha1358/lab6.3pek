#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3pek/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63рек
{
	TEST_CLASS(UnitTest63рек)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 3, 5, 7, 9 };
			int size = 5;
			Assert:(Sum(a, size, 0), 0, 1e-1);

		}
	};
}
