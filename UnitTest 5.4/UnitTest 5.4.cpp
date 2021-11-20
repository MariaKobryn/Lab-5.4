#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab 5.4\Lab 5.4\Lab 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 1;
			int i = 1;
			double t;
			t = (1. * i * N) / ((1. * i * i) + (1. * N * N));
			Assert::AreEqual(t, 0.5);


		}
	};
}
