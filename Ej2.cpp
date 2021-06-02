#include <iostream>

// Dado un numero entero de la forma (AAAAMMDD), 
// que representa una fecha valida 
// mostrar el dia, mes y año que representa

int main()
{
	char numberChar[9];

	std::cout << "Ingrese el numero: ";
	std::cin >> numberChar;

	std::cout << std::endl;

	std::cout << "Dia: " << numberChar[6] << numberChar[7] << std::endl;
	std::cout << "Mes: " << numberChar[4] << numberChar[5] << std::endl;
	std::cout << "Año: " << numberChar[0] << numberChar[1] << numberChar[2] << numberChar[3] << std::endl;
}