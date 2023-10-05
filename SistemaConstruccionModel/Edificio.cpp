#include "Edificio.h"

using namespace SistemaConstruccionModel;

Edificio::Edificio() {

}

Edificio::Edificio(int codigo, int nroPisos, int nroDepartamentos, int aforo, double areaTotal, int numero, double areaCochera) {
	this->codigo = codigo;
	this->nroPisos = nroPisos;
	this->nroDepartamentos = nroDepartamentos;
	this->aforo = aforo;
	this->areaTotal = areaTotal;
	this->numero = numero;
	this->areaCochera = areaCochera;
}