#include "pch.h"
#include "CppUnitTest.h"
#include "../KAA_Repository_v8/KAA_Repository_v8.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KAAUnitTest
{
	TEST_CLASS(KAAUnitTest)
	{
	public:
		
		TEST_METHOD(Check_isInputCorrect_Empty)
		{
			string str = "";
			bool expected = false;

			bool actual = isInputCorrect(str);

			Assert::AreEqual(expected, actual, L"Entered empty value");
		}

		TEST_METHOD(Check_isInputCorrect_Letter)
		{
			string str = "a";
			bool expected = false;

			bool actual = isInputCorrect(str);

			Assert::AreEqual(expected, actual, L"Entered incorrect value");
		}

		TEST_METHOD(Check_isInputCorrect_ZeroValue)
		{
			string str = "0";
			bool expected = false;

			bool actual = isInputCorrect(str);

			Assert::AreEqual(expected, actual, L"Entered 0");
		}

		TEST_METHOD(Check_calcOst_1)
		{
			int a = 7;
			int b = 2;
			int expected = 1;

			int actual = calcOst(a, b);

			Assert::AreEqual(expected, actual, L"Incorrect value");
		}
		TEST_METHOD(Check_calcOst_0)
		{
			int a = 12;
			int b = 2;
			int expected = 0;

			int actual = calcOst(a, b);

			Assert::AreEqual(expected, actual, L"Incorrect value");
		}
		TEST_METHOD(Check_resDel_3)
		{
			int a = 8;
			int b = 24;
			int expected = 3;

			int actual = resDel(b, a);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}
		TEST_METHOD(Check_resDel_4)
		{
			int a = 5;
			int b = 20;
			int expected = 4;

			int actual = resDel(b, a);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}		
	};
}
