#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3.3F/Lab3.3F/Angle.h"
#include "../Lab3.3F/Lab3.3F/Angle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33F
{
	TEST_CLASS(UnitTest33F)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Angle A(90, 0), B(180, 0);
			Assert::AreEqual(round(A.getSin()), 1.);
			Assert::AreEqual(round(B.getSin()), 0.);
		}
	};
}
