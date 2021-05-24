#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba6.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5, -5, 5, 36 };
			Assert::AreEqual(averageValueOfModules(arr, size(arr)), 7.625);
		}
	};
}
