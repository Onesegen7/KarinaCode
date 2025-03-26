#ifndef RECOMENDACION_H
#define RECOMENDACION_H

#include <iostream>
#include "Pintura.cpp"

using namespace std;

class Recomendacion {
public:
	static void calcularRecomendacion(int calidad, int altura, int largo, int tipoSuperficie) {
		int area = altura * largo;
		int cobertura = Pintura::Superficie(tipoSuperficie);
		float litrosNecesarios = (float)area / cobertura;
		int precioLitro = Pintura::Calidad(calidad);
		float costoTotal = litrosNecesarios * precioLitro;

		cout << "\nSuperficie total: " << area << " m^2";
		cout << "\nLitros necesarios: " << litrosNecesarios << " L";
		cout << "\nCosto total estimado: $" << costoTotal << "\n";

	}
};

#endif