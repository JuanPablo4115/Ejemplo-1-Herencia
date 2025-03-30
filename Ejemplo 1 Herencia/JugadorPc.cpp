#include "JugadorPc.h"
#include <ctime>
#include <stdlib.h>
void JugadorPc::seleccionar(){
	int opcion = rand() % 3 + 1;
	setJugada(opcion);
}