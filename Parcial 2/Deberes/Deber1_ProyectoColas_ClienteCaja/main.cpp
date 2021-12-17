/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES:
*{
*@author ADRIAN PAEZ
*@author CRISTOPHER ZAMBRANO
*@author KEVIN ASMAL
*@author CARLOS IPIALES
*}
*TEMA: Colas, programa cliente - caja
*FECHA DE CREACION : 10/12/2021
*FECHA DE MODIFICACION: 12/12/2021
*VERSION: 1.0
*/

#include <iostream>
#include "Cola.h"
#include "Nodo.h"
#include "Datos.h"

int main()
{

	Datos datox;
	datox.cantidadClientes();
	datox.genNuevoPrimero();
	datox.imprimir();

}