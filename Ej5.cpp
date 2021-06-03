#include <iostream>

// Dado un triángulo representado por sus lados L1, L2, L3, 
// determinar e imprimir una 
// leyenda según sea : equilátero, isósceles o escalenos.

int main()
{
	float L1, L2, L3;

	std::cout << "Valor del primer lado: ";
	std::cin >> L1;
	std::cout << "Valor del segundo lado: ";
	std::cin >> L2;
	std::cout << "Valor del tercer lado: ";
	std::cin >> L3;

	std::cout << std::endl;

	if(L1 != L2 && L1 != L3)
		std::cout << "En triangulo es escaleno." << std::endl;
	else if(L1 == L2 && L2 == L3)
		std::cout << "En triangulo es equilatero." << std::endl;
	else
		std::cout << "En triangulo es isoseles." << std::endl;
}