#include "pch.h"
#include "CppUnitTest.h"
#include "../ProyectoParcial1/Estudiante.h"
#include "../ProyectoParcial1/Fecha.h"
#include "../ProyectoParcial1/Materia.h"
#include "../ProyectoParcial1/Estudiante.cpp"
#include "../ProyectoParcial1/Fecha.cpp"
#include "../ProyectoParcial1/Materia.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestValidarCedula)
		{
			bool val = false;
			Estudiante<int> e;
			val = e.validarCedula(1719303800);
			Assert::IsTrue(val);
		}
		TEST_METHOD(TestValidarCedula2)
		{
			bool val = false;
			Estudiante<int> e;
			val = e.validarCedula(1719303801);
			Assert::IsTrue(val);
		}
		TEST_METHOD(TestValidarFecha)
		{
			bool val = false;
			Fecha f;
			val = f.validarFecha(12,06,2001);
			Assert::IsTrue(val);
		}
		TEST_METHOD(TestValidarFecha2)
		{
			bool val = false;
			Fecha f;
			val = f.validarFecha(31, 02, 2021);
			Assert::IsTrue(val);
		}
		TEST_METHOD(TestGenerarCorreo)
		{
			bool val = false;
			Estudiante<int> e;
			string correo = e.generarCorreo("Xavier Remigio", "Cordova Garzon");
			string correoe = "xrcordova@espe.edu.ec";
			if (correo == correoe)
			{
				val = true;
			}
			else {
				val = false;
			}
			Assert::IsTrue(val);
		}
		TEST_METHOD(TestGenerarCorreo2)
		{
			bool val = false;
			Estudiante<int> e;
			string correo = e.generarCorreo("Xavier Remigio", "Cordova Garzon");
			string correoe = "rxcordova@espe.edu.ec";
			if (correo == correoe)
			{
				val = true;
			}
			else {
				val = false;
			}
			Assert::IsTrue(val);
		}
		TEST_METHOD(TestCalcularPromedio)
		{
			bool val = false;
			float promedio;
			Materia<int,float> m;
			promedio = m.calcularPromedio(14.5f, 12.3f, 15.2f);
			if (promedio == 14)
			{
				val = true;
			}
			else {
				val = false;
			}
			Assert::IsTrue(val);
		}
		TEST_METHOD(TestCalcularPromedio2)
		{
			bool val = false;
			float promedio;
			Materia<int, float> m;
			promedio = m.calcularPromedio(12.5f, 18.3f, 10.3f);
			if (promedio == 13.7f)
			{
				val = true;
			}
			else {
				val = false;
			}
			Assert::IsTrue(val);
		}
	};
}
