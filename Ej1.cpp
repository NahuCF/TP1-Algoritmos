#include <iostream>

// Dados dos valores enteros A y B, informar la suma, la resta y el producto

int main()
{
	int a, b;

	std::cout << "Ingrese el primer valor: ";
	std::cin >> a;
	std::cout << "Ingrese el segundo valor: ";
	std::cin >> b;

	std::cout << std::endl;

	std::cout << "La suma de los numeros es: " << a + b << std::endl;
	std::cout << "La resta de los numeros es: " << a - b << std::endl;
	std::cout << "El producto de los numeros es: " << a * b << std::endl;
}