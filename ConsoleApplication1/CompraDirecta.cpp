#ifndef COMPRADIRECTA_H
#define COMPRADIRECTA_H

#include <iostream>
#include "Pintura.cpp"

class CompraDirecta {
public:
	static void calcularCompra(int calidad, int balde5, int balde10, int balde20) {
		int precioLitro = Pintura::Calidad(calidad);
		int litrosTotales = (balde5 * 5) + (balde10 * 10) + (balde20 * 20);
		float costoTotal = litrosTotales * precioLitro;
		cout << "\nTotal de litros comprados: " << litrosTotales << " L";
		cout << "\nCosto total: $" << costoTotal << "\n";
	}
};
#endif