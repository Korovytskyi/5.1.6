#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1F/Triad.h"
#include "../5.1F/Date.h"
#include "../5.1F/Date.cpp"
#include "../5.1F/Triad.h"
#include "../5.1F/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triad a(1, 2, 3);
			Assert::AreEqual(a > 0, true);
		}
	};
}
