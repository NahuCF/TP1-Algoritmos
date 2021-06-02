#include <iostream>

// Dado tres valores determinar e imprimir 
// una leyenda según sea: “Forman triangulo” o 
// “No forman triangulo”.

int main()
{
	float a, b, c;

	std::cout << "Ingrese el primer valor: ";
	std::cin >> a;
	std::cout << "Ingrese el primer segundo: ";
	std::cin >> b;
	std::cout << "Ingrese el primer tercer: ";
	std::cin >> c;

	std::cout << std::endl;

	if(a >= b && a >= c)
	{
		if(b + c >= a)
			std::cout << "Forman triangulo" << std::endl;
		else
			std::cout << "No forman triangulo" << std::endl;
	}
	else if(b >= a && b >= c)
	{
		if (a + c >= b)
			std::cout << "Forman triangulo" << std::endl;
		else
			std::cout << "No forman triangulo" << std::endl;
	}
	else if(c >= a && c >= b)
	{
		if (a + b >= a)
			std::cout << "Forman triangulo" << std::endl;
		else
			std::cout << "No forman triangulo" << std::endl;
	}
}