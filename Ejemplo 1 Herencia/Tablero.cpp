#include "Tablero.h"
#include "Jugador.h"
#include "Arbitro.h"
#include <iostream>
using namespace std;
	Tablero::Tablero(Jugador j1, Jugador j2) {
		jugador1 = j1;
		jugador2 = j2;
	}
	void Tablero::MostrarJugada() {
		cout << "Jugador 1: ";
		mostrarSimbolo(jugador1.getJugada());
		cout << " VS Jugador 2: ";
		mostrarSimbolo(jugador2.getJugada());
		cout << endl;
	}
	void Tablero::MostrarGanador(Arbitro a1) {
		short resultado = a1.evaluar();
		if (resultado == 1)
			cout << "¡Jugador 1 gana!" << endl;
		else if (resultado == -1)
			cout << "¡Jugador 2 gana!" << endl;
		else
			cout << "¡Empate!" << endl;
	}
	void Tablero::mostrarSimbolo(short jugada) {
		if (jugada == 1) cout << "()";
		else if (jugada == 2) cout << "[]";
		else if (jugada == 3) cout << "8<";
	}
