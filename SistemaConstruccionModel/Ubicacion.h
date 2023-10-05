#pragma once

namespace SistemaConstruccionModel {

	public ref class Ubicacion {
	private:
		int codigo;
		double latitud;
		double longitud;

	public:
		Ubicacion();
		Ubicacion(int codigo, double latitud, double longitud);
	};

}