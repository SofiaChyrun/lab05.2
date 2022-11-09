#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab5.2/ChyrunSofialab5.2.2.cpp"





using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t, n;
			double s=0;
			t = S(1, 0.1,n,s, 1);
			Assert::AreEqual(t, 0);
		}

	
	};
}
