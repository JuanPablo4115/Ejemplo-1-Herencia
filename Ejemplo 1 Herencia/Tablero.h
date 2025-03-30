#pragma once
#include "Jugador.h"
#include "Arbitro.h"
class Tablero
{
public:
	Jugador jugador1;
	Jugador jugador2;
	Tablero(Jugador j1, Jugador j2);
	void MostrarJugada();
	void MostrarGanador(Arbitro a1);
	void mostrarSimbolo(short jugada);
};

