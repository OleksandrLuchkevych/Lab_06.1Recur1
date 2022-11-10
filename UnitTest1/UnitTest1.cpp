#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.1Recur/Lab_06.1Recur.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int suma = 0;
			int a[] = { 2, 6, 8, 21, 9 };
			int S = Sum(a, 5, 0, suma);

			Assert::AreEqual(S, 30);

		}
	};
}
