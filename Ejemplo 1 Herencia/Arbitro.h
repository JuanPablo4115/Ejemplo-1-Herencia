#pragma once
#include "Jugador.h"
class Arbitro
{
public:
	Jugador jugador1;
	Jugador jugador2;
	Arbitro(Jugador j1, Jugador j2);
	short evaluar();
};

