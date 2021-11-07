/*Universidad de las fuerzas armadas ESPE
OPERACIONES
Autores:
Xavier Cordova
Camila Naspud
Juan Gallardo
Nicole Lara
Fecha de creaci�n: Miercoles 03 de Noviembre del 2021
Fecha de modificaci�n: Jueves 04 de Noviembre del 2021
Materia: Estructura de datos
NRC: 7166*/

#include "pch.h"
#include "CppUnitTest.h"
#include "../Complejo/Complejo.h"
#include "../Complejo/Complejo.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestComplejo
{
	TEST_CLASS(UnitTestComplejo)
	{
	public:
		
		TEST_METHOD(ComplejosTestSuma1)
		{
			Complejo<int> A(1, 3), B(2, 4);
			Complejo<int> C;
			Complejo<int> R(3,7);

			C = A + B;

			Assert::IsTrue((C.getReal() == R.getReal()) && (C.getImg() == R.getImg()));
		}

		TEST_METHOD(ComplejosTestSuma2)
		{
			Complejo<int> A(1, 3), B(2, 4);
			Complejo<int> C;
			Complejo<int> R(4, 5);

			C = A + B;

			Assert::IsTrue((C.getReal() == R.getReal()) && (C.getImg() == R.getImg()));
		}

		TEST_METHOD(ComplejosTestResta1)
		{
			Complejo<int> A(1, 3), B(2, 4);
			Complejo<int> C;
			Complejo<int> R(-1, -1);

			C = A - B;

			Assert::IsTrue((C.getReal() == R.getReal()) && (C.getImg() == R.getImg()));
		}

		TEST_METHOD(ComplejosTestResta2)
		{
			Complejo<int> A(1, 3), B(2, 4);
			Complejo<int> C;
			Complejo<int> R(3, 7);

			C = A - B;

			Assert::IsTrue((C.getReal() == R.getReal()) && (C.getImg() == R.getImg()));
		}
	};
}
