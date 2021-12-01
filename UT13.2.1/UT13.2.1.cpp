#include "pch.h"
#include "CppUnitTest.h"
#define QUB(x) (x)*(x)*(x)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT1321
{
	TEST_CLASS(UT1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 1;
			int x_kub = QUB(x);

			Assert::IsTrue(x_kub == 1);
		}
	};
}