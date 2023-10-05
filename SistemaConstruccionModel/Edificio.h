#pragma once
#include "Departamento.h"

using namespace System::Collections::Generic;

namespace SistemaConstruccionModel {

	public ref class Edificio {
	private:
		int codigo;
		int nroPisos;
		int nroDepartamentos;
		int aforo;
		double areaTotal;
		int numero;
		double areaCochera;
		List<Departamento^>^ listaDepartamentos;

	public:
		Edificio();
		Edificio(int codigo, int nroPisos, int nroDepartamentos, int aforo, double areaTotal, int numero, double areaCochera);
	};
}