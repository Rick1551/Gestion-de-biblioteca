#include <iostream>
#include "../include/Book.h"
#include "../include/Borrow.h"
#include "../include/Users.h"

int main() {
	std::vector<Book> library; // Biblioteca de libros

	int opcion = 0;
	do {		
		std::cout << "Menu de opciones:\n" << "1. Agregar libro\n" << "2. Prestar libro\n"
			<< "3. Devolver libro\n" << "4. Mostrar libros\n" << "5. Agregar usuario\n"
			<< "6. Mostrar usuarios\n" << "7. Salir\n" << "Seleccione una opcion: ";
		std::cin >> opcion;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiar buffer
		switch (opcion)
		{
		case 1: {
			std::string titulo, autor, isbn, a;
			int year;

			std::cout << "Ingrese el nombre del libro: ";
			std::getline(std::cin, titulo);

			std::cout << "Ingrese el autor: ";
			std::getline(std::cin, autor);

			Book::addBook(library, titulo, autor, 2023, "ISBN-1234567890");
			std::cout << "Libro agregado exitosamente.\n";
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
			std::cout << "Libros en la biblioteca:\n";
			for (const auto& book : library) {
				book.displayInfo();
				std::cout << "---------------------\n";
			}
			
			break;
		}
		case 5: {
			std::cout << "Ingrese los datos del usuario\n Nombre:\n ID ";
			break;
		}

		default:
			break;
		}

	} while (opcion != 7);

	return 0;
}