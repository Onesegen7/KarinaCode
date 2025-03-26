#include <iostream>
#include "Pintura.cpp"
#include "CompraDirecta.cpp"
#include "Recomendacion.cpp"


int main()
{
 int opcion;
    
    do {
        Pintura::mostrarPrecios();

        int calidad;
        cout << "Seleccione la calidad de la pintura (1-3) o ingrese 0 para salir: ";
        cin >> calidad;

        if (calidad == 0) {
            cout << "Saliendo del programa...\n";
            break;
        }

        while (calidad < 1 || calidad > 3) {
            cout << "Opcion invalida. Seleccione una calidad valida (1-3): ";
            cin >> calidad;
        }

        calidad = (calidad == 1) ? Pintura::ECONOMICA : 
                  (calidad == 2) ? Pintura::CALIDAD : 
                                   Pintura::SINTETICA;

        cout << "¿Quiere una recomendacion de compra? (1: Si, 2: No, 0: Salir): ";
        cin >> opcion;

        if (opcion == 0) {
            cout << "Saliendo del programa...\n";
            break;
        }

        while (opcion != 1 && opcion != 2) {
            cout << "Opcion invalida. Ingrese 1 para recomendacion, 2 para compra directa, o 0 para salir: ";
            cin >> opcion;
        }

        if (opcion == 1) {
            int altura, largo, superficie;
            cout << "Ingrese la altura de la pared (m): "; cin >> altura;
            cout << "Ingrese el largo de la pared (m): "; cin >> largo;

            cout << "Seleccione el tipo de superficie (1: Lisa, 2: Rugosa, 3: Porosa): ";
            cin >> superficie;

            while (superficie < 1 || superficie > 3) {
                cout << "Opción invalida. Seleccione 1 para Lisa, 2 para Rugosa, 3 para Porosa: ";
                cin >> superficie;
            }

            superficie = (superficie == 1) ? Pintura::LISA : 
                         (superficie == 2) ? Pintura::RUGOSA : 
                                             Pintura::POROSA;

            Recomendacion::calcularRecomendacion(calidad, altura, largo, superficie);
        } else {
            int balde5, balde10, balde20;
            cout << "Ingrese cantidad de baldes de 5L: "; cin >> balde5;
            cout << "Ingrese cantidad de baldes de 10L: "; cin >> balde10;
            cout << "Ingrese cantidad de baldes de 20L: "; cin >> balde20;

            CompraDirecta::calcularCompra(calidad, balde5, balde10, balde20);
        }
        do {
            cout << "¿Desea realizar otra operacion? (1: Si, 0: Salir): ";
            cin >> opcion;

        } while (opcion != 1 && opcion != 0);

    } while (opcion != 0);

    cout << "Gracias por usar el programa. ¡Hasta luego!\n";
    return 0;
}

