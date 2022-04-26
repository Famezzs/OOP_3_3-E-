#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_3_3(E)/Equilateral.cpp"
#include "../OOP_3_3(E)/Triangle.cpp"
#include "../OOP_3_3(E)/Object.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP53D
{
	TEST_CLASS(UTOOP53D)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triangle a(3, 4, 5);
			Assert::AreEqual(90., a.GetGamma());
			Assert::AreEqual(12., a.GetPerimeter());

			Equilateral b(3);
			Assert::IsTrue(fabs(60. - b.GetAlpha()) < 0.00001);
			Assert::AreEqual(9., b.GetPerimeter());
			Assert::IsTrue(fabs(3.89711431 - b.GetArea()) < 0.00001);

			Assert::AreEqual(3., (b++).GetA());
			Assert::AreEqual(5., (++b).GetA());
		}
	};
}