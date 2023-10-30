#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.1/Lab_05.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 4, y = 2;
			int c = g(x * x, 1, y) - g(y * y, x, 1);
			Assert::AreEqual(c, 43);
		}
	};
}
