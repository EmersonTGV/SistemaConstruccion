#include "Ubicacion.h"

using namespace SistemaConstruccionModel;

Ubicacion::Ubicacion() {

}

Ubicacion::Ubicacion(int codigo, double latitud, double longitud) {
	this->codigo = codigo;
	this->latitud = latitud;
	this->longitud = longitud;
}