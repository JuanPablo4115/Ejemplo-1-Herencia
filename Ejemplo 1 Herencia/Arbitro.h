#pragma once
#include "Jugador.h"
class Arbitro
{
public:
	Jugador jugador1;
	Jugador jugador2;
	Arbitro::Arbitro(Jugador j1, Jugador j2);
	short Arbitro::evaluar();
};

