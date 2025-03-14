#pragma once
class Jugador{
private:
	short jugada;
public:
	Jugador();
	Jugador(int opcion);
	void seleccionar();
	short getJugada();
	void setJugada(short x);
};

