#pragma once
class Crud {
public:
	virtual void insertar(int val) {};
	virtual void mostrar() {};
	virtual bool eliminar(int val) { return false; };
};
