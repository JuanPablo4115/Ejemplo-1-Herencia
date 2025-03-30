// Ejemplo 1 Herencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Jugador.h"
#include "Arbitro.h"
#include "Tablero.h"
#include "JugadorPc.h"

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	JugadorPc j5;
	Jugador j1, j3;
	Jugador j2(1);
	Jugador j4(3);
	j1.seleccionar();
	j5.seleccionar();
	Arbitro a1(j1, j5);
	Tablero t(j1, j5);
	t.MostrarJugada();
	t.MostrarGanador(a1);
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
