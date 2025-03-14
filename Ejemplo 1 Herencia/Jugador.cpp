#include "Jugador.h"
#include <iostream>
using namespace std;
	Jugador::Jugador() {
		jugada = 0;
	}
	Jugador::Jugador(int opcion) {
		jugada = opcion;
	}
	void Jugador::seleccionar() {
		short opcion;
		do {
			cout << "Seleccione su jugada: 1,2,3" << endl;
			cin >> opcion;
		} while (opcion < 1 || opcion>3);
		jugada = opcion;
	}
	short Jugador::getJugada() {
		return jugada;
	}
	void Jugador::setJugada(short x) {
		jugada = x;
	}
