#include <iostream>
#include <string>

// Dado un numero entero de la forma (AAAAMMDD), 
// que representa una fecha valida 
// mostrar el dia, mes y año que representa

int main()
{
	std::string n;

	std::cout << "Ingrese el numero: ";
	std::cin >> n;

	std::cout << std::endl;

	std::cout << "Dia: " << n[6] << n[7] << std::endl;
	std::cout << "Mes: " << n[4] << n[5] << std::endl;
	std::cout << "Año: " << n[0] << n[1] << n[2] << n[3] << std::endl;
}