#include "Proyecto.h"

using namespace SistemaConstruccionModel;

Proyecto::Proyecto() {

}

Proyecto::Proyecto(int codigo, String^ fechaInicio, String^ fechaEntrega, String^ departamento, String^ provincia, String^ distrito, int nroEdificios, String^ nombre) {
	this->codigo = codigo;
	this->fechaInicio = fechaInicio;
	this->fechaEntrega = fechaEntrega;
	this->departamento = departamento;
	this->provincia = provincia;
	this->distrito = distrito;
	this->nroEdificios = nroEdificios;
	this->nombre = nombre;
}

/*Las propiedades son metodos que nos permiten acceder y modificar
			  un atributo. Son los famosos GET y SET y se hace uno por cada atributo*/
int Proyecto::getCodigo() {
	return this->codigo;
}

void Proyecto::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ Proyecto::getFechaInicio() {
	return this->fechaInicio;
}

void Proyecto::setFechaInicio(String^ fechaInicio) {
	this->fechaInicio = fechaInicio;
}

String^ Proyecto::getFechaEntrega() {
	return this->fechaEntrega;
}

void Proyecto::setFechaEntrega(String^ fechaEntrega) {
	this->fechaEntrega = fechaEntrega;
}

String^ Proyecto::getDepartamento() {
	return this->departamento;
}

void Proyecto::setDepartamento(String^ departamento) {
	this->departamento = departamento;
}

String^ Proyecto::getProvincia() {
	return this->provincia;
}

void Proyecto::setProvincia(String^ provincia) {
	this->provincia = provincia;
}

String^ Proyecto::getDistrito() {
	return this->distrito;
}

void Proyecto::setDistrito(String^ distrito) {
	this->distrito = distrito;
}

int Proyecto::getNroEdificios() {
	return this->nroEdificios;
}

void Proyecto::setNroEdificios(int nroEdificios) {
	this->nroEdificios = nroEdificios;
}

String^ Proyecto::getNombre() {
	return this->nombre;
}

void Proyecto::setNombre(String^ nombre) {
	this->nombre = nombre;
}