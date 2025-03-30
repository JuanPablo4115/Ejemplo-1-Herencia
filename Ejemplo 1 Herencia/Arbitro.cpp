#include "Arbitro.h"
#include "Jugador.h"
	Arbitro::Arbitro(Jugador j1, Jugador j2) {
		jugador1 = j1;
		jugador2 = j2;
	}
	short Arbitro::evaluar() {
		short resp;
		if (jugador1.getJugada() == jugador2.getJugada())
			resp = 0;
		else if ((jugador1.getJugada() == 1 && jugador2.getJugada() == 3) ||
			(jugador1.getJugada() == 3 && jugador2.getJugada() == 2) ||
			(jugador1.getJugada() == 2 && jugador2.getJugada() == 1))
			resp = 1;
		else
			resp = -1;
		return resp;
	}