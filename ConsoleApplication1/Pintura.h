#pragma once
#include <iostream>
#ifndef Pintura
#define Pintura

using namespace std;

class Pintura{
public:
	enum Calidad { ECONOMICA = 80, CALIDAD = 120, SINTETICA = 180};
	enum Superficie { LISA = 8, RUGOSA = 6, POROSA = 4};

	static void mostrarPrecios() {
		cout << "Precios por litro:\n";
		cout << "1. Económica: $80\n";
		cout << "2. Calidad: $120\n";
		cout << "3. Sintética: $180\n";
	}

};

#endif

