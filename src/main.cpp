#include <iostream>
#include "../include/Book.h"
#include "../include/Borrow.h"
#include "../include/Users.h"


int main() {
	int opcion = 0;
	std::cout << "Menu de opciones:\n" << "1. Agregar libro\n" << "2. Prestar libro\n"
	<< "3. Devolver libro\n" << "4. Mostrar libros\n" << "5. Agregar usuario\n"
	<< "6. Mostrar usuarios\n" << "Seleccione una opcion: ";
	
	std::cin >> opcion;

	switch (opcion)
	{
	case 1: {
		std::cout << "Ingrese el nombre del libro: ";
		break;
	}
	case 2: {
		std::cout << "Ingrese el ID del libro a prestar: ";
		break;
	}
	case 3: {
		std::cout << "Ingrese el ID del libro a devolver: ";
		break;
	}
	case 4: {
		std::cout << "Mostrando libros...\n";
		// Aquí se llamaría a una función para mostrar los libros
		break;
	}
	case 5: {
		std::cout << "Ingrese los datos del usuario\n Nombre:\n ID ";
		break;
	}

	default:
		break;
	}

	return 0;
}