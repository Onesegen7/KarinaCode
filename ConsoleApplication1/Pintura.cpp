#ifndef PINTURA_H
#define PINTURA_H

#include <iostream>

using namespace std;

class Pintura {
public:
    enum Calidad { ECONOMICA = 80, CALIDAD = 120, SINTETICA = 180 };
    enum Superficie { LISA = 8, RUGOSA = 6, POROSA = 4 };

    static void mostrarPrecios() {
        cout << "Precios por litro:\n";
        cout << "1. Economica: $80\n";
        cout << "2. Calidad: $120\n";
        cout << "3. Sintetica: $180\n";
    }
};

#endif